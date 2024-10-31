/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:45:02 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/26 19:34:46 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// __ GET LEN !! 

char	*ft_strncpy(char *dest,const char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int _GET_LEN(char *__STR)
{
    int _INDEX;

    _INDEX = 0;
    while (__STR[_INDEX])
    {
        _INDEX++;
    }
    return _INDEX;
}

static int __GET_NUM_OF_WORDS_(const char *_STR, char __CC)
{
    int __is_WORD;
    int __c_WORD;

    __is_WORD = 0;
    __c_WORD = 0;
    while (*_STR)
    {
        if (*_STR == __CC)
        {
            __is_WORD = 0;
        }
        else
        {
            if (__is_WORD == 0)
            {
                __is_WORD = 1;
                __c_WORD++;
            }
        }
        _STR++;
    }
    return __c_WORD;
}

static char *__ALLOCATE_CHARACTERS(const char *_START, const char *_END)
{
    int _LEN = _END - _START;
    char *__new_ALLOCATED_WORD;
    __new_ALLOCATED_WORD = malloc((_LEN + 1) * sizeof(char));
    if (__new_ALLOCATED_WORD)
    {
        ft_strncpy(__new_ALLOCATED_WORD, _START, _LEN);
        __new_ALLOCATED_WORD[_LEN] = '\0';
    }
    return __new_ALLOCATED_WORD;
}

char **ft_split(const char *s, char c)
{
    if (!s) return NULL;
    int __count_word;
    int _is_WORD;
    int __s_INDEX;
    char **_NEW_STR;
    const char *_START_WORD = NULL;


    _is_WORD = 0;
    __s_INDEX = 0;
    __count_word = __GET_NUM_OF_WORDS_(s, c);
    _NEW_STR = malloc((__count_word + 1) * sizeof(char *));
    if(_NEW_STR == NULL)
        return NULL;
    
    while (*s)
    {
        if (*s == c)
        {
            if(_is_WORD)
            {
                _NEW_STR[__s_INDEX++] = __ALLOCATE_CHARACTERS(_START_WORD, s);
                _is_WORD = 0;
            }
        }else
        {
            if(!_is_WORD)
            {
                _is_WORD = 1;
                _START_WORD = s;
            }
        }
        s++;
    }
    if (_is_WORD) {
        _NEW_STR[__s_INDEX++] = __ALLOCATE_CHARACTERS(_START_WORD, s);
    }

    
    _NEW_STR[__s_INDEX] = NULL;
    return _NEW_STR;
}

int main() {
    char **result = ft_split("Hello          world this is a test", ' ');
    
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);  // Don't forget to free each substring
    }
    
    free(result);  // Free the array of pointers
    return 0;
}