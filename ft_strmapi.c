/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:51:49 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/27 14:36:21 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int __GET_LEN(char *_S)
{
    int _INDEX;

    _INDEX = 0;
    while (*_S)
    {
        _S++;
        _INDEX++;
    }
    return _INDEX;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *__NEW_STR;
    unsigned int _INDEX;

    if (!s)
        return NULL;
    
    __NEW_STR = malloc(__GET_LEN(s) * sizeof(char));
    if (!__NEW_STR)
        return NULL;
    
    _INDEX = 0;
    while (__NEW_STR[_INDEX] != '\0')
    {
        __NEW_STR[_INDEX] = f(_INDEX, s[_INDEX]);
        _INDEX++;
    }
    __NEW_STR[_INDEX] = '\0';
    return __NEW_STR;
}