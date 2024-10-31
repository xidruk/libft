/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:21:44 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/26 01:33:52 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _GET_LEN(const char *STR)
{
    int _LEN;

    _LEN = 0;
    while (*STR)
    {
        STR++;
        _LEN++;
    }
    return _LEN;
}

int _is_VALID(char _STR_C, const char *_SET)
{
    while (*_SET)
    {
        if (_STR_C == *_SET)
        {
            return 1;
        }
        _SET++;
    }
    return 0;
}


char *strtrim(const char *str, const char *set)
{
    char *_NEW_STRING;
    int _STR_LEN = _GET_LEN(str);
    int _START_POSITION, _END_POSITION;
    _START_POSITION = 0 ;
    _END_POSITION = _STR_LEN - 1;
    int i = 0;
    while (_START_POSITION < _STR_LEN && _is_VALID(str[_START_POSITION], set))
    {
        _START_POSITION++;
    }
    while (_END_POSITION > _START_POSITION && _is_VALID(str[_END_POSITION], set))
    {
        _END_POSITION--;
    }
    _NEW_STRING = malloc((_END_POSITION - _START_POSITION + 2) * sizeof(char));
    if (_NEW_STRING == NULL)
    {
        return NULL;
    }
    i = 0;
    while (i < _END_POSITION - _START_POSITION + 1)
    {
        _NEW_STRING[i] = str[_START_POSITION + i];
        i++;
    }
    _NEW_STRING[_END_POSITION - _START_POSITION + 1] = '\0';
    
    return _NEW_STRING;
    
}
int main(void) {
    const char str[] = "#Hello, World!#";
    const char set[] = "#";
    char *trimmed = strtrim(str, set);
    
    if (trimmed) {
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed); // Free allocated memory
    } else {
        printf("Memory allocation failed\n");
    }
    return 0;
}