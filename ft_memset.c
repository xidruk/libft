/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:50:41 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/22 10:15:29 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    char *s;

    i = 0;
    s = str;
    while(i < n)
    {
        s[i] = c;
        i++;
    }
    return str;
}

int main(void)
{
   char buffer[] = "khalid";
   printf( "Before: %s\n", buffer );
   ft_memset( buffer, 'h', 4 );
   printf( "After:  %s\n", buffer );
}