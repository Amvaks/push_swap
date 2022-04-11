/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filling_steck.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:07:14 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 20:20:01 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_wrong_symbol(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (ft_strlen(str) == 1)
			ft_error();
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error();
		i++;
	}
}

void	ft_check_repeat(t_list *head, t_list *current)
{
	while (head)
	{
		if (head->val == current->val)
			ft_error();
		head = head->previous;
	}
}

t_list	*ft_filling_stack(int argc, char *argv[])
{
	int		i;
	t_list	*head;
	char	**res;
	int		j;

	head = 0;
	i = 0;
	while (i != argc - 1)
	{
		j = 0;
		i++;
		res = ft_split(argv[i], ' ');
		if (!(*res))
			ft_error();
		while (res[j])
		{
			ft_check_wrong_symbol(res[j]);
			ft_check_repeat(head, ft_lst_create(ft_atoi(res[j])));
			ft_lst_pushback(&head, ft_lst_create(ft_atoi(res[j])));
			free(res[j++]);
		}
		if (*res)
			free(res);
	}
	return (head);
}