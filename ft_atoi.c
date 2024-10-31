/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:06:01 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/31 16:09:38 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_get_sign(const char *str)
{
	int	str_index;
	int	ngs_counter;

	str_index = 0;
	ngs_counter = 0;
	while (str[str_index] == '+' || str[str_index] == '-')
	{
		if (str[str_index] == '-')
		{
			ngs_counter++;
		}
		str_index++;
	}
	if (ngs_counter % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign_value;
	int	index;

	index = 0;
	result = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
	{
		index++;
	}
	sign_value = _get_sign(&str[index]);
	while (str[index] == '+' || str[index] == '-')
	{
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign_value);
}
