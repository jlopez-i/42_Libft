/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:30:55 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 17:16:29 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_putcnbr(char *str, int n, int len)
{
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (n > 0 && n < 10)
	{
		str[len - 1] = n + '0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "0", 2);
		return (str);
	}
	if (n == -2147483648)
	{
		str = (char *)malloc(12 * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	len = ft_count(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_putcnbr (str, n, len);
	return (str);
}
/*
int	main()
{
	char	*int_min;
	
	int_min = ft_itoa(-2);
	puts(int_min);
	return(0);
}
*/
/*PARAMETROS:
El entero a convertir.
RETORNO:
La string que represente el número. NULL si falla la reserva.
DESCRIPCION:
Reserva con malloc(3) y devuelve una string que representa el número dado
como argumento. Los números negativos deben gestionarse correctamente.*/

/*ft_count
Con esta funcion determino la longitud del int que ingresa
ft_putcnbr
Con esta funcion paso de int a char
Destino memoria para 3 casos distintos:
Cuando ingresa un 0
Cuando ingreso el INT_MIN
Cuando ingreso otros valores.*/
