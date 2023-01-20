/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:35:14 by danielga          #+#    #+#             */
/*   Updated: 2023/01/20 18:57:20 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int p)
{
	int		len;
	char	*hex;
	long	nmb;

	hex = "0123456789abcdef";
	len = 0;
	nmb = (long)p;
	while (nmb > 0)
	{
		ft_printchar(hex[p % 16]);
		len++;
		nmb = nmb / 16;
	}
	return (len);
}

/*
La base hexadecimal es "0123456789abcdef", que son los 16 elementos que puede contener. 

me recomiendan basarme en ft_itoa para %p.
*/