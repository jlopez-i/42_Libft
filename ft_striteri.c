/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:50:22 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 16:29:47 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (char *)(s + i));
		i++;
	}
}
/*DESCRIPCION
Aplica la función ’f’ a cada caracter de la string dada como argumento,
pasando su índice como primer argumento. Cada caracter se pasa como una
dirección a ’f’, por si hace falta modificarlo*/
/*PARAMETROS
#1. La string que iterar.
#2. La función a aplicar a cada caracter.*/
