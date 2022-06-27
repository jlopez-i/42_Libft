/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:26:17 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/15 18:20:47 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *str;
	t_list *new;		//creamos un pointer

	str = ft_lstnew("Primero\n");
	new = ft_lstnew("Segundo\n");
	ft_lstadd_front(&str, new);
	while (str)
	{
		printf("content : %s\n", str->content);
		str = str->next;
	}
	return(0);
}

typedef struct s_list 
{
	void			*content;
	struct s_list	*next; 
}	t_list;
*/
/*PARAMETROS
##1. La dirección de un puntero al primer elemento de una lista.
#2. La dirección de un puntero al elemento a añadir a la lista.
RETURN
Nada
DESCRIPCION
Añade el elemento ’new’ al principio de la lista.
*/
