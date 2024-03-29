/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaisha <vaisha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:02:16 by vaisha            #+#    #+#             */
/*   Updated: 2019/12/13 17:01:53 by vaisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_plus_space_f(t_data *list, char *tmp)
{
	char	*ret;

	ret = NULL;
	ft_clean_counts(list);
	list->len = ft_strlen(tmp);
	if (list->plus_space != '.' && tmp[0] != '-')
	{
		ret = (char*)malloc(sizeof(char) * list->len + 2);
		if (list->plus_space == '+')
			ret[list->i] = '+';
		else if (list->plus_space == ' ')
			ret[list->i] = ' ';
		while (tmp[list->j])
			ret[list->i++] = tmp[list->j++];
		ret[list->i++] = '\0';
	}
	else if (list->plus_space == '.' || tmp[0] == '-')
		ret = ft_strdup(tmp);
	ft_clean_s(tmp);
	return (ret);
}

char		*ft_oktotorp_f(t_data *list, char *tmp)
{
	char	*ret;

	ret = NULL;
	ft_clean_counts(list);
	list->len = ft_strlen(tmp);
	if (list->hash == '#')
	{
		if (ft_strchr(tmp, '.') != 0)
			ret = ft_strdup(tmp);
		else
		{
			ret = (char*)malloc(sizeof(char) * list->len + 2);
			while (tmp[list->j])
				ret[list->i++] = tmp[list->j++];
			ret[list->i++] = '.';
			ret[list->i++] = '\0';
		}
	}
	else
		ret = ft_strdup(tmp);
	ft_clean_s(tmp);
	return (ret);
}

void		ft_write(t_data *list, char *s)
{
	ft_clean_counts(list);
	while (s && s[list->i])
	{
		write(1, &s[list->i++], 1);
		list->ret++;
	}
}

void		ft_f(t_data *list, va_list arg)
{
	double	f;
	char	*ret;

	f = 0;
	ret = NULL;
	f = va_arg(arg, double);
	ret = ft_floats(f);
	ret = ft_accuracy_f(list, ret);
	ret = ft_oktotorp_f(list, ret);
	ret = ft_plus_space_f(list, ret);
	ret = ft_width_f(list, ret);
	ft_write(list, ret);
}
