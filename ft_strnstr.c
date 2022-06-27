/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:28:04 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/21 17:47:38 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p1;
	char	*p2;

	p1 = (char *)haystack;
	p2 = (char *)needle;
	i = 0;
	j = 0;
	if (!*p2)
		return (p1);
	while ((p1[i] != '\0') && i < len)
	{
		if (p1[i] == p2[0])
		{
			while ((p1[i + j] == p2[j]) && i + j < len)
			{
				j++;
				if (p2[j] == '\0')
					return (&p1[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*The strnstr() function locates the first occurrence of the
null-termi-nated string needle in the string haystack,
where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
En esta funcion buscamos encontrar un string dentro de otro string,
por lo que inicializamos dos contadores, uno que vayan recorriendo la 
string haystack hasta encontrar la primera coincidencia con la string 
needle y luego otro que vaya recorriendo la string neddle.*/
