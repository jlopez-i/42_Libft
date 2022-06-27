/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:29:54 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/21 18:07:40 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = (char *)malloc(count * size * sizeof(char));
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
/*Allocates space for an array of objects of the size.
Returns a pointer to the start (lowest byte address) of the object.
The array is initialized to zero.
La funcion calloc asigna memoria pero llenandola con 0.*/
