/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaisha <vaisha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:51:04 by vaisha            #+#    #+#             */
/*   Updated: 2019/12/13 17:12:25 by vaisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int i;

	i = 0;
	printf("he = %#24f\n", 567.76);
	//i = ft_printf("my = %f\n", 567.7);
	printf("%d\n", i);
	return (0);
}
