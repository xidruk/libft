/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:05:55 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/22 15:11:38 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>



void    *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    size_t i;
    i = 0;
    if (!dest_str && !src_str)
    {
        return (NULL);
    }
    if (dest_str != src_str )
    {
        while (i < n)
        {
            ((unsigned char *)dest_str)[i] = ((unsigned char *)src_str)[i];
            i++;
        }
    }
    return (dest_str);
}
int main(void)
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}