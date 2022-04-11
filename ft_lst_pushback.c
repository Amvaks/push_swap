/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:17 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 20:21:00 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_pushback(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!new)
		return ;
	if (!*lst)
	{	
		*lst = new;
		return ;
	}
	head = *lst;
	while (head->previous)
		head = head->previous;
	head->previous = new;
	new->next = head;
	new->previous = 0;
}
