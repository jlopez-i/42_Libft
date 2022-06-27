/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:26:27 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/20 16:30:06 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

/*
Parámetros
#1. El elemento a liberar.
#2. La dirección de la función utilizada para eliminar el contenido.
Descripción
Toma como parámetro un elemento y libera la memoria del contenido del 
elemento utilizando la función ’del’ dada como parámetro, por último
libera el elemento. La memoria de ’next’ no debe liberarse.
Funciones autorizadas
free
*/
