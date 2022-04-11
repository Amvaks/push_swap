/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:15:42 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 21:01:27 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*previous;
	int				val;
	int				rra;
	int				rrb;
	int				rrr;
	int				ra;
	int				rb;
	int				rr;
}	t_list;

void	ft_error(void);
t_list	*ft_filling_stack(int argc, char *argv[]);
void	ft_check_operation(char *operation, t_list **a, t_list **b);
void	ft_lst_del(t_list **lst);
int		*ft_get_sort_arr(t_list *lst);
void	ft_reverse_rotate(t_list **lst);
void	ft_swap(t_list **lst);
void	ft_push(t_list **a, t_list **b);
void	ft_rotate(t_list **lst);
#endif
