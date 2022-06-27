/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:51:37 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/21 18:16:48 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	if (ft_strlen(s) < start)
	{
		s1 = (char *)malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	ft_memcpy(s1, &s[start], len);
	s1[len] = '\0';
	return (s1);
}
/*Allocates (with malloc) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.*/
