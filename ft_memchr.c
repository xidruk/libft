/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:02:02 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 10:53:29 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


void *ft_memchr(const void *s, int c, size_t n)
{

    const char *_NEW_STR = (const char *)s;
    
    size_t _INDEX;

    _INDEX = 0;
    while (_NEW_STR[_INDEX] != '\0' && _INDEX < n)
    {
        if (_NEW_STR[_INDEX] == c)
        {
            return (char *)&_NEW_STR[_INDEX];
        }
        
        _INDEX++;
    }
    return NULL;    
}

int main(void)
{
    puts(ft_memchr("khalid", 'd', 5));
    return 0;
}