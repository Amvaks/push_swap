/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:11:17 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:28:50 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lst_del(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = (*lst)->previous;
	if (*lst)
		(*lst)->next = 0;
	free(tmp);
	tmp = 0;
}
