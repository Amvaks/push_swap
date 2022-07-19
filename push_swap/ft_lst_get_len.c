/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:11:34 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:28:24 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lst_get_len(t_list	*lst)
{
	int	i;

	i = 0;
	while (lst->next)
		lst = lst->next;
	while (lst)
	{
		i++;
		lst = lst->previous;
	}
	return (i);
}
