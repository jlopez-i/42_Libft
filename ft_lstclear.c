/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:35:23 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/20 16:49:59 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;

	tmp = *lst;
	while (tmp)
	{
		(*del)(tmp->content);
		p = tmp->next;
		free(tmp);
		tmp = p;
	}
	*lst = NULL;
}
/*Parámetros
 #1. La dirección del puntero a un elemento.
#2. Un puntero a la función utilizada para eliminar el contenido de cada
elemento.
Descripción
Elimina y libera cada uno de los elementos de la lista dada,
utilizando la función ’del’ y free(3). Por último, el puntero
a la lista debe ponerse a NULL.
Funciones autorizadas: free
*/
