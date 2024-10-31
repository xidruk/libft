/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:11:46 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/27 10:42:41 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int __COUNT_ALLOCATED_SIZE(int _NN, int _SG)
{
    int __SIZE;
    if (_NN == 0)
        return 1;
    while (_NN > 0)
    {
        __SIZE++;
        _NN /= 10;
    }
    if (_SG < 0)
        return __SIZE + 1;
    return __SIZE;
}

char *__UNDERFLOW_HANDLER()
{
    char *__UNDERFLOW;
    int __INDEX;
    char __undf_value[] = "-2147483648";

    __UNDERFLOW = malloc(12 * sizeof(char));
    if (!__UNDERFLOW)
        return NULL;
    __INDEX  = 0;
    // copy int :: underflow value to new allocated string !
    while (__undf_value[__INDEX] != '\0')
    {
        __UNDERFLOW[__INDEX] = __undf_value[__INDEX];
        __INDEX++;
    }
    __UNDERFLOW[__INDEX] = '\0';
    return __UNDERFLOW;
}

char *__CAST_INT_VALUE(int __NUM_VALUE, int _SIGN)
{
    int __SIZE;
    char *__NEW_STR;
    int __INDEX;

    __SIZE = __COUNT_ALLOCATED_SIZE(__NUM_VALUE, _SIGN);
    __NEW_STR = malloc((__SIZE + 1) * sizeof(char));
    if(!__NEW_STR)
        return NULL;
    __NEW_STR[__SIZE] = '\0';
    __INDEX = __SIZE - 1;
    
    if(_SIGN < 0)
    {
        __NEW_STR[0] = '-';
        __NUM_VALUE = -__NUM_VALUE;
    }
    while (__NUM_VALUE > 0)
    {
        __NEW_STR[__INDEX--] = (__NUM_VALUE % 10) + '0';
        __NUM_VALUE /= 10;
    }
    return __NEW_STR;
}

char *ft_itoa(int n)
{
    int _NUM_SIGN;
    char *__ZERO_CASE;

    if (n == -2147483648)
    {
        return __UNDERFLOW_HANDLER();
    }

    if (n > 0)
    {
        _NUM_SIGN = 1;
    }else if (n < 0)
    {
        _NUM_SIGN = -1;
    }
    else
    {
        __ZERO_CASE = malloc(2 * sizeof(char));
        if(!__ZERO_CASE)
            return NULL;
        __ZERO_CASE[0] = '0';
        __ZERO_CASE[1] = '\0';
        return __ZERO_CASE;
    }
    return __CAST_INT_VALUE(n, _NUM_SIGN);
}

int main(void)
{
    
    puts(ft_itoa(122));
    

    return 0;
}