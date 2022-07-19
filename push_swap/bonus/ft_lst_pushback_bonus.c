/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:13:17 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:28:53 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
