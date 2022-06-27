/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:24:12 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 16:28:53 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*sresult;

	len = ft_strlen(s);
	sresult = (char *)malloc((len + 1) * sizeof(char));
	if (!sresult)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		sresult[i] = f(i, s[i]);
	i++;
	}
	sresult[len] = '\0';
	return (sresult);
}
/*DESCRIPCION
Aplica la función ’f’ a cada caracter de la string ’s’
para crear la nueva string, 
resultado de aplicar sucesivas veces ’f’ (utilizando malloc(3)). 
A esta función se le pasará el índice del caracter iterado.*/
/*PARAMETROS
#1. La string que iterar.
#2. Un puntero a la función que aplicar a cada caracter.*/
/*RETURN
La string resultante de aplicar sucesivas veces ’f’ a cada caracter. 
NULL si falla la reserva.*/
