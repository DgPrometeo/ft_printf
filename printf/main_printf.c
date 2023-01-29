/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:07:13 by danielga          #+#    #+#             */
/*   Updated: 2023/01/20 17:50:44 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	main(void)
{
	char	*str;

	str = "Hola que tal";
	printf("original de c: %c \n", str);
	ft_printf("Prueba de c: %c \n", str);

	printf("original de s: %s \n", str);
	ft_printf("Prueba de s: %s \n", str);
	printf("original de s: %s \n", "");
	ft_printf("Prueba de s: %s \n", "");
	printf("original de s: %s \n", " - ");
	ft_printf("Prueba de s: %s \n", " - ");
	printf("original de s: %s \n", "-");
	ft_printf("Prueba de s: %s \n", "-");

	printf("original de p: %p \n", str);
	ft_printf("Prueba de p: %p \n", str);

	printf("original de d: %d \n", str);
	ft_printf("Prueba de d: %d \n", str);

	printf("original de i: %i \n", str);
	ft_printf("Prueba de i: %i \n", str);

	printf("original de u: %u \n", str);
	ft_printf("Prueba de u: %u \n", str);

	printf("original de x: %x \n", str);
	ft_printf("Prueba de x: %x \n", str);

	printf("original de X: %X \n", str);
	ft_printf("Prueba de X: %X \n", str);

	printf("original de %%: %% \n", str);
	ft_printf("Prueba de %%: %% \n", str);
}
