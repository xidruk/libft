/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:04:08 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/25 09:42:10 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _GET_STR_LEN(const char *_STR)
{
    int _LEN;
    
    _LEN = 0;
    while (_STR[_LEN] != '\0')
    {
        _LEN++;
    }
    return _LEN;    
}

char *ft_strdup(const char *_ORG_STR)
{
    char *_NEW_ALLOCATED_STR;
    int _NEW_STR_SIZE;
    int _C;

    _C = 0;
    _NEW_STR_SIZE = _GET_STR_LEN(_ORG_STR);

    _NEW_ALLOCATED_STR = malloc(_NEW_STR_SIZE + 1);

    if (_NEW_ALLOCATED_STR == NULL)
    {
        return NULL;
    }
    while (_ORG_STR[_C] != '\0')
    {
        _NEW_ALLOCATED_STR[_C] = _ORG_STR[_C];
        _C++;
    }
    return _NEW_ALLOCATED_STR;
}

int main(void)
{
    char c[] = "HQLLO";
    char *x = ft_strdup(c);
    puts(x);

    free(x);

    return 0;
}