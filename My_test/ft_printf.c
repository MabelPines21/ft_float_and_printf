/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaisha <vaisha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:17:26 by vaisha            #+#    #+#             */
/*   Updated: 2019/12/13 17:01:15 by vaisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_parcing(const char *format, va_list arg, int i, t_data *list)
{
	while (format[i] && format[i] != '%' && list->type == '.')
	{
		if (format[i] == '+' || format[i] == '-' || format[i] == ' ' ||
			format[i] == '0' || format[i] == '#')
			rem_flag(format, i, list);
		else if ((ft_isdigit(format[i])) ||
			format[i] == '*' || format[i] == '.')
			i = rem_width_accuracy(format, arg, i, list);
		else if (format[i] == 'l' || format[i] == 'h' || format[i] == 'L')
			rem_length(format, i, list);
		else if (ft_isalpha(format[i]))
			rem_type(format, i, list);
		i++;
	}
	if (list->type != '.')
		ft_allocation(list, arg);
	else if (list->type == '.' && format[i] == '%')
		i = ft_procent(list, i);
	return (i);
}

int			ft_precent(const char *format, va_list arg, t_data *list, int i)
{
	if (format[i] && format[i] == '%' && format[i + 1] == '%')
	{
		ft_putchar(format[++i]);
		i++;
	}
	else if (format[i] && format[i] == '%' && list->percent == '.')
	{
		list->percent = format[i++];
		i = ft_parcing(format, arg, i, list);
	}
	else if (format[i] && format[i] == '%' && list->percent != '.')
	{
		ft_clean_list(list);
		list->percent = format[i++];
		i = ft_parcing(format, arg, i, list);
	}
	return (i);
}

void		ft_check(const char *format, va_list arg, t_data *list, int i)
{
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i++]);
		else if (format[i] == '%')
			i = ft_precent(format, arg, list, i);
	}
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	t_data	*list;
	int		i;
	int		res;

	i = 0;
	res = 0;
	list = NULL;
	va_start(ap, format);
	list = (t_data*)malloc(sizeof(t_data));
	ft_clean_list(list);
	ft_check(format, ap, list, i);
	res = list->ret;
	ft_clean_all(list);
	va_end(ap);
	return (res);
}
