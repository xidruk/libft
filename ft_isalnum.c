/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:01:15 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/22 09:19:32 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
    if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122 ))
        return 1;
    return 0;
}

int main(void){
    char dg[] = "0123456789";
    char lc[] = "qwertyuiopasdfghjklzxcvbnm";
    char uc[] = "QWER*YUIOPASDFGHJKLZXCVBNM";

    int i = 0;
    while (uc[i])
    {
        printf("%d", ft_isalnum(uc[i]));
        i++;
    }
    return 0;
}