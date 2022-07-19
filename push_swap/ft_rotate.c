/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:16:07 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:28:13 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	if (!*lst || !(*lst)->previous)
		return ;
	head = (*lst);
	tmp = (*lst);
	*lst = (*lst)->previous;
	(*lst)->next = 0;
	while (head->previous)
		head = head->previous;
	head->previous = tmp;
	tmp->next = head;
	tmp->previous = 0;
}
