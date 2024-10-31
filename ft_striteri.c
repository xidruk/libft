/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:37:14 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/30 05:37:46 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void f(unsigned int i, char *c)
{
    if(c)
        *c = *c + 1;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int _INDEX;

    if(!s || !f)
        return ;
    
    _INDEX = 0;
    while (s[_INDEX] != '\0')
    {
        f(_INDEX, &s[_INDEX]);
        _INDEX++;
    }
}

int main()
{
    char s[] = "abc";

    ft_striteri(s, f);
    printf("%s", s);

    return 0;
}
