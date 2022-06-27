/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:50:59 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/15 16:46:30 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	if (root)
	{
		root->content = content;
		root->next = NULL;
	}
	return (root);
}

/*PARAMETROS
#1. El contenido sobre el que crear un nuevo elemento.
VALOR DEVUELTO
El nuevo elemento
FUNCIONES AUTORIZADAS
Malloc
DESCRIPCION
Reserva con malloc(3) y devuelve un elemento nuevo. 
La variable ’content’ se inicializa con el valor del parámetro ’content’. 
La variable ’next’ se inicializa a NULL.*/
