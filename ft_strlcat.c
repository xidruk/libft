/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:29:03 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 08:16:56 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <stdio.h>

int get_strLen(const char *str)
{
    int _strlen_counter;
    _strlen_counter = 0;
    while (str[_strlen_counter])
    {
        _strlen_counter++;
    }
    return (_strlen_counter);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t des_len;
	size_t src_len;
	size_t des_c;
	size_t c;
	
	c = 0;
	
	des_len = get_strLen(dest);
	src_len = get_strLen(src);
	des_c = des_len;
	if (!dest && size == 0)
		return (src_len);
	while (src[c] && des_c + 1 < size)
	{
		dest[des_c] = src[c];
		c++;
		des_c++;
	}
	dest[des_c] = 0;
	return des_len + src_len;	
}

