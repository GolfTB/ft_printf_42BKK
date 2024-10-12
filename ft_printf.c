/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:32:26 by paphetpr          #+#    #+#             */
/*   Updated: 2024/10/12 16:15:53 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
				ft_print_interger(va_arg(args, int));
			else if (*format == 's')
				ft_print_string(va_arg(args, char *));
			else if (*format == 'c' || *format == '\0')
				putchar(*format);
			else if (*format == 'p')
				ft_print_pointer(va_arg(args, unsigned int));
			else if (*format == 'u')
				ft_print_unsignes_decimal(va_arg(args, int));
			else if (*format == 'x')
				ft_print_Lhexadecimal((va_arg(args, int)););
			else if (*format == 'X')
				ft_print_Uhexadecimal(va_arg(args, int));;
			else if (*format == '%')
				putchar('%');
		}
		format++;
	}
	va_end(args);
}

int	main(void)
{
	ft_printf("Hello %s, number is %d\n", "World", 42);
	return (0);
}