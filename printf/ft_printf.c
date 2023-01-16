/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:50:01 by danielga          #+#    #+#             */
/*   Updated: 2023/01/16 19:42:02 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_variable(char const *str, int len)
{
	if (str[i + 1] == 'c')
	//imprime un solo carácter)
	else if (str[i + 1] == 's')
	//imprime el string
	else if (str[i + 1] == 'p')
	//el puntero void * dado como argumento se imprimer hexadecimalmente.
	else if (str[i + 1] == 'd')
	//imprime un número decimal (base 10)
	else if (str[i + 1] == 'i')
	//imprime un numero entero en base 10.
	else if (str[i + 1] == 'u')
	//imprime un numero decimal sin signo.
	else if (str[i + 1] == 'x')
	//imprime un número hexadecimal (base 16) en minusculas
	else if (str[i + 1] == 'X')
		//imprime un número hexadecimal (base 16) en minusculas
	else if (str[i + 1] == '%')
	//imprime el simbolo del porcenjate.
}

int	ft_printf(char const *str, ...)
{
	int	i;
	va_list	args;
	int	len;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_variable(str, i);
			len++;
			i++;
		}
		else
		{
			ft_printchar(str);
			len++;
			i++;
		}
	}
	va_end (args);
	return (len);
}
