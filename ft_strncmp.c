/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:17:00 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 09:48:01 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t _INDEX;

    _INDEX = 0;
    while ((s1[_INDEX] != '\0' || s2[_INDEX] != '\0') && _INDEX < n)
    {
        if (s1[_INDEX] != s2[_INDEX])
        {
            if (s1[_INDEX] > s2[_INDEX])
            {
                return s1[_INDEX] - s2[_INDEX];
            }
            else
            {
                return s1[_INDEX] - s2[_INDEX];
            }
        }
        _INDEX++;
    }
    
    return 0;
}
int main(void)
{
    printf("%d", ft_strncmp("khaliB", "khaliA", 6));
    return 0;
}