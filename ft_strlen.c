/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:40:59 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/30 05:41:40 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(char *comstr)
{
    size_t str_counter;

    str_counter = 0;
    while (comstr[str_counter])
    {
        str_counter++;
    }
    return str_counter;
}

int main(void)
{
    char x[] = "gjffyfy";

    printf("%zu", ft_strlen(x));

    return 0;
    
}