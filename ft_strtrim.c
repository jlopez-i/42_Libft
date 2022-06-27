/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:36:15 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 16:25:29 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			start;
	size_t			len;
	char			*strim;

	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != 0)
		start++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]) != 0)
		i--;
	len = i - start + 1;
	strim = ft_substr(s1, start, len);
	if (!strim)
		return (NULL);
	return (strim);
}
/*
int	main(void)
{
	char const *s1 = "42ho42la42";
	char const *set = "42";
	
	char *strim;
	
	ft_putstr_fd((char *)s1, 1);
	ft_putchar_fd('\n', 1);
	strim = ft_strtrim((char *)s1, set);
	ft_putstr_fd(strim, 1);
	return (0);
}
PARAMETROS
#1. La string a recortar.
#2. El conjunto de caracteres utilizado como referencia para el recorte.
RETORNO
La string recortada. NULL si falla la reserva.
DESCRIPCION
Allocates (with malloc) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string.
Reserva con malloc y devuelve una copia de ’s1’ 
con los caracteres dados en ’set’ eliminados tanto del principio 
como del final
Explicacion: Recorro la string s1 en busca de una coincidencia con la string
set a traves de la funcion strinchar, desde ambas direcciones.
Luego, usamos la funcion substr para devolver la str resultante.*/
