/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:45:51 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/22 22:59:29 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest_mb, const void *src_mb, size_t numOfBytes)
{
    size_t i;
    char j;
    unsigned char *d;
    unsigned char *s;
    i = 0;
    j = 1;
    d = (unsigned char *)dest_mb;
    s = (unsigned char *)src_mb;

    if(!dest_mb && !src_mb)
    {
        return (NULL);
    }
    if (dest_mb > src_mb)
    {
        j = -1;
        d+= numOfBytes - 1;
        s+= numOfBytes - 1;
    }

    while (i < numOfBytes)
    {
        *d = *s;
        d += j;
        s += j;
        i++;
    }
    return dest_mb;
    
}

int main()
{
    char s1[] = "khalid";
    char s2[] = "barkan";
    ft_memmove(s1, s1, 4);
    puts(s1);

    return 0;
}