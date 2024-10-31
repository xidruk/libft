/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:29:07 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/25 08:45:30 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t num, size_t size)
{
    void *_ALLOCATED_MEMEORY;
    size_t _TOTAL_SIZE;
    _TOTAL_SIZE = num * size;
    _ALLOCATED_MEMEORY = malloc (_TOTAL_SIZE);

    if(_ALLOCATED_MEMEORY == NULL) 
        return NULL;
    memset(_ALLOCATED_MEMEORY, 0, _TOTAL_SIZE);
    return _ALLOCATED_MEMEORY;
}

int main(void)
{
    int *pp = ft_calloc(10, 4);
    char *op = malloc(10 * sizeof(char *));

    // printf("%s", pp);
     //printf("%zu", sizeof(*pp));


    
     int *arr = ft_calloc(10, sizeof(int)); // Allocate memory for 10 integers

    // Accessing and printing elements
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]); // Prints 0 for all
    }

    free(arr);

    //ßputs(pp);
     free(pp);
    free(op);
    
    return 0;
}