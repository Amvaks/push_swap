/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:02:31 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:27:23 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_filling(char **res, t_list *a, int j)
{
	while (res[j])
		free(res[j++]);
	free(res);
	while (a)
		ft_lst_del(&a);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_error_bonus(t_list **a, t_list **b, int *sort_arr)
{
	while (*a)
		ft_lst_del(a);
	while (*b)
		ft_lst_del(b);
	free(sort_arr);
	write(2, "Error\n", 6);
	exit(1);
}
