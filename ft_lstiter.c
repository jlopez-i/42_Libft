/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:19:38 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/20 18:28:04 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*Parámetros
#1. Un puntero al primer elemento de una lista.
#2. Un puntero a la función que se aplicará a cada elemento de la lista.
Descripcion
Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento.
*/
