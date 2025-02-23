/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:49:17 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/22 09:00:07 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    
    return (0);
}

int main(void)
{
    printf("%d", ft_isdigit('p'));
    return 0;
}