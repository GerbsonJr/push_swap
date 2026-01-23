/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:21:35 by gmateus-          #+#    #+#             */
/*   Updated: 2026/01/07 13:31:46 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_conversion(const char type, va_list list)
{
	if (type == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(list, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_putnbr(va_arg(list, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_putnbr_hexa(va_arg(list, unsigned int), type));
	else if (type == 'p')
		return (ft_putptr(va_arg(list, void *)));
	else if (type == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		len;
	int		check;

	if (!str)
		return (-1);
	len = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			check = ft_conversion(*(++str), list);
			if (check == -1)
				return (va_end(list), -1);
			len += check;
		}
		else if (write(1, str, 1) == -1)
			return (va_end(list), -1);
		else
			len++;
		str++;
	}
	return (va_end(list), len);
}

/* int     main(void)
{
	char	*str1 = NULL;
	char	*str2 = "Gerbson";
	int	total1;
	int	total2;


        total1 = ft_printf("Teste: %s\n", str2);
        total2 = printf("Teste: %s\n", str2);

	ft_printf("Teste: %X\n", total1);
	printf("Teste: %X\n", total2);
	ft_printf("Teste: %d%s%X\n", 10, str2, total1);
        printf("Teste: %d%s%X\n", 10, str2, total1);

        total1 = ft_printf("Teste: %s\n", str1);
	total2 = printf("Teste: %s\n", str1);

	ft_printf("Teste: %x\n", total1);
        printf("Teste: %x\n", total2);
	ft_printf("Teste: %d\n", total1);
        printf("Teste: %d\n", total2);
} */

/* int	main(void)
{
	char c = 'A';
	char *str = NULL;
	unsigned int unb = -42;
	int nb = 2147483647;

	printf("\ntexto normal:\n"); 
	int r1 = ft_printf("%s\n", str);
	printf("caracteres impressos: %d\n", r1);
	 r1 =    printf("%s\n", str);
	 printf("caracteres impressos: %d\n", r1);
	   
	printf("\nstring:\n");
	int r2 = ft_printf("%s\n",str);
	printf("caracteres impressos: %d\n", r2);
	r2 = printf("%s\n",str);
	printf("caracteres impressos: %d\n", r2);


	printf("\nchar:\n");
	int r3 = ft_printf("%c%c%c\n",c, 'a', '3');
	printf("caracteres impressos: %d\n", r3);
	r3 = printf("%c%c%c\n",c, 'a', '3');
	printf("caracteres impressos: %d\n", r3);


	printf("\ndecimal:\n");
	int r4 = ft_printf("%d\n", nb);
	printf("caracteres impressos: %d\n", r4);
	r4 = printf("%d\n", nb);
	printf("caracteres impressos: %d\n", r4);

	printf("\ninteger:\n");
	int r5 = ft_printf("%i\n", nb);
	printf("caracteres impressos: %d\n", r5);
	r5 = printf("%i\n", nb);
	printf("caracteres impressos: %d\n", r5);

	printf("\nunsigned:\n");
	int r6 = ft_printf("%u\n", unb);
	printf("caracteres impressos: %d\n", r6);
	r6 = printf("%u\n", unb);
	printf("caracteres impressos: %d\n", r6);

	printf("\nlow hexadecimal:\n");
	int r7 = ft_printf("%x\n", nb);
	printf("caracteres impressos: %d\n", r7);
	r7 = printf("%x\n", nb);
	printf("caracteres impressos: %d\n", r7);

	printf("\nupper decimal:\n");
	int r8 = ft_printf("%X\n", nb);
	printf("caracteres impressos: %d\n", r8);
	r8 = printf("%X\n", nb);
	printf("caracteres impressos: %d\n", r8);

	printf("\npointer:\n");
	int r9 = ft_printf("%p\n", str);
	printf("caracteres impressos: %d\n", r9);
	r9 = printf("%p\n", str);
	printf("caracteres impressos: %d\n", r9);

	printf("\nteste %%:\n");
	int r10 = ft_printf("%%\n");
	printf("caracteres impressos: %d\n", r10);
	r10 = printf("%%\n");
	printf("caracteres impressos: %d\n", r10);

	ft_printf("%08d\n", 42);

} */
