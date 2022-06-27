/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:55:36 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/20 19:08:37 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_elem;
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		new_elem = ft_lstnew(tmp);
		if (!new_elem)
		{
			(*del)(tmp);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
Parametros
#1. La dirección de un puntero a un elemento.
#2. La dirección a un puntero a función utilizada para iterar la lista.
#3. La dirección a un puntero a función utilizado para eliminar el contenido de 
un elemento en caso de requerirse.
Return
La nueva lista. NULL si la reserva falla.
Funciones autorizadas: malloc, free.
Descripción
Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento. 
La aplicación correcta de la función ’f’ sobre cada elemento genera
una nueva lista con estos.
La función ’del’ se utilizará para eliminar el contenido de un elemento en caso 
de necesitarse.
*/
