/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:01:40 by danielga          #+#    #+#             */
/*   Updated: 2023/01/30 18:28:50 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printhex(unsigned long long p, char *hex);
int		ft_print_unsig_nbr(unsigned int n);

#endif