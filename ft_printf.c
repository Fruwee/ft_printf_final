/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: petrbenes <petrbenes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 12:42:20 by petrbenes         #+#    #+#             */
/*   Updated: 2024/07/04 16:27:54 by petrbenes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// empty value needs to be sorted out on the level of "main" function

#include "ft_printf.h"

int the_chosen_one(char c, va_list argptr)
{
	int len;

	len = 0;

	if (c == 'c')
	{
		ft_putchar(va_arg(argptr, int));
		len++;
	}
	return (len);
}

int ft_printf(const char *str, ...)
{
	va_list argptr;
	int len;
	int c;

	len = 0;
	c = 0;
	va_start(argptr, str);
	while (str[c])
	{
		if (str[c] == '%')
		{
			len += the_chosen_one(str[c + 1], argptr);
			c += 2;
		}
		else
		{
			ft_putchar(str[c]);
			c++;
			len++;
		}
	}

	va_end(argptr);
	return (len);
}
