/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:56:19 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/24 11:26:26 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *_NEW_s1 = (const unsigned char *)s1;
    const unsigned char *_NEW_s2 = (const unsigned char *)s2;

    size_t _INDEX;

    _INDEX = 0;
    while ((_NEW_s1[_INDEX] || _NEW_s2[_INDEX]) && _INDEX < n)
    {
        if (_NEW_s1[_INDEX] != _NEW_s2[_INDEX])
        {
            if (_NEW_s1[_INDEX] > _NEW_s2 [_INDEX])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        _INDEX++;
    }
    return 0;
}

int main(void)
{
    printf("%d", ft_memcmp("khaliA", "khaliB", 6));
    
    return 0;

}