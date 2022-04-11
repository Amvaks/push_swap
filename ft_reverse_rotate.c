/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:15:37 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 20:21:10 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	if (!(*lst))
		return ;
	if (!(*lst)->previous)
		return ;
	head = (*lst);
	while (head->previous)
		head = head->previous;
	tmp = head;
	head = head->next;
	head->previous = 0;
	(*lst)->next = tmp;
	tmp->previous = (*lst);
	(*lst) = tmp;
	tmp->next = 0;
}
