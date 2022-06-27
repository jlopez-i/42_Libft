/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:06:05 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/21 16:45:03 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	n;

	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	n = 0;
	while (src[n] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[n]));
}
/*Appends string src to the end of dst.
dstsize sets the length of the destination string,
effectively equal to its buffer size. 
It will append at most dstsize – strlen(dst) – 1 characters.*/
