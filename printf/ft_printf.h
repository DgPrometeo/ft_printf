/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:01:40 by danielga          #+#    #+#             */
/*   Updated: 2023/02/07 17:17:18 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//para hacer funcionar write y las variádicas.

# include <unistd.h>
# include <stdarg.h>

/**
 * @brief La función base para empezar a escribir lo que se necesite. De ella, 
 * derivará al resto de funciones dependiendo del parámetro establecido.
 * 
 * @param str El string enviado.
 * @param ... Todos los argumentos que requiera.
 * 
 * @return La cantidad de caracteres impresos.
**/
int		ft_printf(char const *str, ...);

/**
 * @brief Imprime un carácter. Utilizada para los parámetros %c, %%.
 * 
 * @param str El carácter a imprimir.
 * 
 * @return La cantidad de caracteres impresos.
**/
int		ft_printchar(int c);

/**
 * @brief Imprimirá un string completo. Utilizada para los parámetros %s y %p. 
 * 
 * @param str El string enviado.
 * 
 * @return La cantidad de caracteres impresos.
**/
int		ft_printstr(char *str);

/**
 * @brief Imprimirá un entero o número. Utilizada para los parámetros %d y %i.
 * 
 * @param n El entero enviado.
 * 
 * @return La cantidad de elementos impresos.
**/
int		ft_printnbr(int n);

/**
 * @brief Imprime un número hexadecimal. Utilizada en los parámetros %p y %x-X 
 * 
 * @param p El elemento a imprimir.
 * @param hex la base hexadecimal.
 * 
 * @return La cantidad de caracteres impresos.
**/
int		ft_printhex(unsigned long p, char *hex);

/**
 * @brief Imprime un número o entero sin signo. Utilizada en el parámetro %u.  
 * 
 * @param n el número o entero a imprimir.
 * 
 * @return La cantidad de caracteres impresos.
**/
int		ft_print_unsig_nbr(unsigned int n);

#endif