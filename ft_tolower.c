/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:48:14 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/23 16:59:13 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_tolower(int ch)
{
	char _converter;

 	if(ch >= 65 && ch <= 90)
	{
		_converter = ch + 32;
		return _converter;
	}
	return ch;
}

int main(void)
{
	char x[] = "KHQLID455okiqqzazAZ";
	int i = 0;
	while(x[i])
	{
		printf("%c", ft_tolower(x[i]));
		i++;
	}
	return 0;
}
