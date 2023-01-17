/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:31:46 by danielga          #+#    #+#             */
/*   Updated: 2023/01/17 15:33:00 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strprint(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
		len++;
	}
	return (len);
}
