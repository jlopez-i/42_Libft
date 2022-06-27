/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:27:05 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/21 17:24:04 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
Returns a null pointer if c is not found.*/
