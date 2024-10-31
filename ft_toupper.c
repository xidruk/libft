/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:29:10 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/23 16:46:49 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_toupper(int ch)
{
	char _converter;
	if(ch >= 97 && ch <= 122)
	{
		_converter = ch - 32;
	   return _converter;	
	}
	else
		return ch;
}

int main(void)
{
	char x[] = "DEHOEFIKQIWHIWISJWJSWI287549*6+-990()fefefefeejih!@bekb";
	int i = 0;
	while(x[i])
	{
		printf("%c - ", ft_toupper(x[i]));
		i++;
	}
	return 0;
}
