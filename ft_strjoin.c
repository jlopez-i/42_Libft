/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:27:53 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 16:25:00 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens1;
	size_t		lens2;
	size_t		len;
	char		*s3;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = lens1 + lens2;
	s3 = (char *)malloc((len +1) * sizeof(char));
	if (!s3)
		return (NULL);
	ft_memmove(s3, s1, lens1);
	ft_memmove(s3 + lens1, s2, lens2);
	s3[len] = '\0';
	return (s3);
}
/*Allocates (with malloc) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.
Reserva con malloc una nueva string,
basada en la unión de las dos strings dadas como parámetros.
Es decir que hay que reservar una memoria para dos strings.
En el segundo memmove parto de s3 + lens1 para concatenar la otra
string a partir de esa ubicacion*/
