/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:02:38 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 08:39:11 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c);


int main(void)
{
	char x[] = "HWLLjbfffjfgfgfgjjfeO";
	char y = 'j';
	puts(ft_strrchr(x,y));
	printf("\n");
	puts(strrchr(x, y));
	return 0;
}

char *ft_strrchr(const char *str, int c)
{
	int _lastPosition;
	int i;

	_lastPosition = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == (unsigned char )c)
			_lastPosition = i;
		i++;
	}
	if (_lastPosition != 0 )
		return (char *)&str[_lastPosition];
	else
		return NULL;
}