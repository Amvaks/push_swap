/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filling_stack_utils_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbart <sbart@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:39:15 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 20:28:43 by sbart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

#define INT_MIN "-2147483648"
#define INT_MAX "2147483647"
#define INT_MAX2 "+2147483647"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_drop_zero(char **str)
{
	while (**str == '0' && ft_strlen(*str) > 1)
		(*str)++;
}

int	ft_check_minmax(char *str)
{
	int	len;

	ft_drop_zero(&str);
	len = ft_strlen(str);
	if (len >= 12)
		return (1);
	else if (len == 10)
	{
		if (ft_strcmp(str, INT_MAX) > 0)
			return (1);
	}
	else if (len == 11)
	{
		if (str[0] == '-' && ft_strcmp(str, INT_MIN) > 0)
			return (1);
		if (str[0] == '+' && ft_strcmp(str, INT_MAX2) > 0)
			return (1);
	}
	return (0);
}