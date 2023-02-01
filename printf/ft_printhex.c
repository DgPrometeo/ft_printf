/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:35:14 by danielga          #+#    #+#             */
/*   Updated: 2023/02/01 20:44:00 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long p, char *hex)
{
	int		len;

	len = 0;
	if (p == 0)
		return (ft_printchar('0'));
	if (p > 15)
	{
		len += ft_printhex(p / 16, hex);
		len += ft_printhex(p % 16, hex);
	}
	else
		len += ft_printchar(hex[p % 16]);
	return (len);
}

/*{
	int					len;
	unsigned long long	nmb;

	len = 0;
	nmb = p;
	if (p == 0)
		return (ft_printchar('0'));
	while (nmb > 0)
	{
		nmb = nmb / 16;
		ft_printchar(hex[p % 16]);
		len++;
		p = p / 16;
	}
	return (len);
}*/
//Imprime al revés la función cuando no debería hacerlo.

/*{
	int					len;
	unsigned long long	nmb;

	len = 0;
	nmb = p;
	if (p == 0)
		return (ft_printchar('0'));
	if (nmb > 16)
	{
		len++;
		ft_printhex(nmb / 16, hex);
		ft_printhex(nmb % 16, hex);
	}
	else
	{
		ft_printchar(hex[p % 16]);
		len++;
	}
	return (len);
}*/
//imprime la función casí correctamente pero creo que no toma bien el len.

/*
La base hexadecimal es "0123456789abcdef", que son los 16 elementos que 
puede contener. 

me recomiendan basarme en ft_itoa para %p.
*/