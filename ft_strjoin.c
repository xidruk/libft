/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:35:05 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/27 18:02:00 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _GET_STR_LEN(char *STR)
{
    int _LEN;

    _LEN = 0;
    while (STR[_LEN] != '\0')
    {
        _LEN++;
    }
    return (_LEN);
}

int _GET_TOTAL_LEN(char **_GSTRING, char *_SP, int _NOI)
{
    int _FINAL_LEN;
    int _INDEX;
    int _SP_LEN;

    _SP_LEN = _GET_STR_LEN(_SP) * (_NOI - 1);
    _INDEX = 0;
    _FINAL_LEN = 0;
    while (_INDEX < _NOI)
    {
        _FINAL_LEN += _GET_STR_LEN(_GSTRING[_INDEX]);
        _INDEX++;
    }
    return _FINAL_LEN + _SP_LEN;   
}


void _COLLECT_NEW_STR(char *_NEW_STR, char **_OLDSTR, char *_SEPR, int _OLDS_SIZE)
{
    int _INDEX;
    int _POSITION;
    int _J;

    _INDEX = 0;
    _POSITION = 0;
    _J = 0;
    while (_INDEX < _OLDS_SIZE)
    {
        //_J = 0;
        while (_J < _GET_STR_LEN(_OLDSTR[_INDEX]))
        {
            _NEW_STR[_POSITION++] = _OLDSTR[_INDEX][_J++];
        }
        if (_INDEX < _OLDS_SIZE - 1)
        {
            _J = 0;
            while (_J < _GET_STR_LEN(_SEPR))
            {
                _NEW_STR[_POSITION++] = _SEPR[_J++];
            }
        }
        _INDEX++;
    }
    _NEW_STR[_POSITION] = '\0';
}


char *ft_strjoin(int _STR_SIZE, char **_STR, char *_SEP)
{
    char *_NEW_STR;
    char *_EMPTY;
    
    
    if(_STR_SIZE == 0)
    {
        _EMPTY = malloc(1);
        if(_EMPTY)
            _EMPTY[0] = '\0';
        return (_EMPTY);
    }
    _NEW_STR = malloc(_GET_TOTAL_LEN(_STR, _SEP, _STR_SIZE) + 1);
    if(_NEW_STR == NULL)
        return NULL;
    _COLLECT_NEW_STR(_NEW_STR, _STR, _SEP, _STR_SIZE);
    return _NEW_STR;
}

int main(void) {
    int size;
    char *n[] = {"khalid", "barkan", "yass"};
    char x[] = "x";

    size = sizeof(n) / sizeof(n[0]);

    char *result = ft_strjoin(size, n, x);
    if (result) {
        printf("%s\n", result);
        free(result); // Remember to free the allocated memory
    }

    return 0;
}