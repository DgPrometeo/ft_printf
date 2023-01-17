/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:50:01 by danielga          #+#    #+#             */
/*   Updated: 2023/01/17 13:39:36 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_variable(va_list args, char const str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (str == 's')
		len += ft_strchar(va_arg(args, char*));
/*	else if (str == 'p')
	//el puntero void * dado como argumento se imprime hexadecimalmente.
	else if (str == 'd')
	//imprime un número decimal (base 10)
	else if (str == 'i')
	//imprime un numero entero en base 10.
	else if (str == 'u')
	//imprime un numero decimal sin signo.
	else if (str == 'x')
	//imprime un número hexadecimal (base 16) en minusculas
	else if (str == 'X')
		//imprime un número hexadecimal (base 16) en mayusculas*/
	else if (str == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_variable(args, str[i]);
			len++;
		}
		else
		{
			ft_printchar(str[i]);
			len++;
		}
		i++;
	}
	va_end (args);
	return (len);
}
