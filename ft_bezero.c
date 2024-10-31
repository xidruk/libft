/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:18:16 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/31 16:09:25 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <strings.h>


void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}


int main(void)
{
   char buffer[] = "khalid";
    char dall[] = "cejbebeefu";

    printf("Before: %s\n", dall);
    printf("Before: %s\n", buffer);

    // Set the first 4 bytes of dall to zero
    ft_bzero(dall, 4);
    printf("After ft_bzero: %s\n", dall); // Expect "beefeu" because the first four characters are now null

    // Use bzero to clear buffer
    bzero(buffer, 5);
    printf("After bzero: %s\n", buffer);


    return 0;

}