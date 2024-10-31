/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:02:30 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/23 14:20:26 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int get_strLen(char *stringAsParam)
{
    int _cCounter;
    _cCounter = 0;
    while (stringAsParam[_cCounter])
    {
        _cCounter++;
    }
    return (_cCounter);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    if (src[0] == '\0')
        return (0);
    if (size <= 0)
        return (get_strLen(src));
    else
    {
        i = 0;
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        return (get_strLen(src));
    }
}

int main()
{

    char s1[10];
    char s2[] = "khalid";
    ft_strlcpy(s1, s2, 7);
    puts(s1);

    return 0;
}
