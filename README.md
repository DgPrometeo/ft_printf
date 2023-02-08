# <b>ft_printf</b>

> _My second project at 42 Málaga_

## This project consists of the realisation of the reprogram the printf function.

<br>
<br>

 >You have to implement the following conversions:
- `%c` Prints a single character.
- `%s` Prints a string (as defined by default in C).
- `%p` The void pointer * given as an argument is printed in hexadecimal format.
- `%d` Prints a decimal number (base 10).
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a hexadecimal number (base 16) in lower case.
- `%X` Prints a hexadecimal number (base 16) in upper case.
- `%%` to print the percent symbol.


<br>

### Elements to <b>compile</b> the library.

* [`ft_printf.h`](printf/ft_printf.h)			- Header with all functions.
* [`Makefile`](printf/Makefile)			- Element to compile and create the library.

Main function:
* [`ft_printf.c`](printf/ft_printf.c)			- Header with all functions.

<br>

### Functions to implement conversions

* [`ft_printchar.c`](printf/ft_printchar.c)			- Function to print a single character. For `%c` and `%%`.
* [`ft_printstr.c`](printf/ft_printstr.c)			- Function to print a string. For `%s`. 
* [`ft_printnbr.c`](printf/ft_printnbr.c)			- Function to print a decimal number or integer in base 10. For `%d` and `%i`. 
* [`ft_print_unsig_nbr.c`](printf/ft_print_unsig_nbr.c)			- Prints an unsigned decimal (base 10) number. For `%u`.
* [`ft_printhex.c`](printf/ft_printhex.c)			- Function for printing in hexadecimal base. For `%p`, `%x` and `%X`

### Extra:

* [`main_printf.c`](printf/main_printf.c)			- function for testing.
