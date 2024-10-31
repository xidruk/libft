/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:31:58 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 14:27:42 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int _GET_STR_LEN(const char *STR)
{
    int _SL;
    _SL = 0;
    while (*STR++)
    {
        _SL++;
    }
    return _SL;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t _NDL_INDEX;
    size_t _HS_INDEX;

    _NDL_INDEX = 0;
    _HS_INDEX = 0;
    if (!*needle)
    {
        return (char *)haystack;
    }
    
    while (haystack[_HS_INDEX] != '\0' && _HS_INDEX < len)
    {
        if (haystack[_HS_INDEX] == needle[_NDL_INDEX])
        {
            while (haystack[_HS_INDEX + _NDL_INDEX] == needle[_NDL_INDEX] && _HS_INDEX < len)
            {
                if (needle[_NDL_INDEX + 1] == '\0')
                    return (char *)&haystack[_HS_INDEX];
                _NDL_INDEX++;   
            }
        }
        _HS_INDEX++;
    }
    return NULL;
}


int main()
{
    puts(ft_strnstr("khalid barkan 1337", "1337", 18));
    return 0;
}