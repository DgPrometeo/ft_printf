/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:52:14 by danielga          #+#    #+#             */
/*   Updated: 2023/01/18 15:39:51 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		len = len + 2;
		ft_printnbr(147483648);
	}
	else if (n < 0)
	{
		len += ft_printchar('-');
		len += ft_printnbr(-n);
	}
	else if (n > 9)
	{
		len += ft_printchar(n / 10);
		ft_printchar(n % 10);
	}
	else
		len += ft_printchar(n + 48);
	return (len);
}
