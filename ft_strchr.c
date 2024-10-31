/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:02:32 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/23 17:57:28 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int search_str)
{
	while (*str != '\0')
	{
		if(*str ==  search_str)
			return (char *)str;
		str++;
	}
	return NULL;
}

int main(void)
{
	char x[] = "khali";
	char s = 'd';
	puts(ft_strchr(x, s));
}
