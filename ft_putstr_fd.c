/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:25:24 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/26 04:48:03 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int _INDEX;

    if (!s)
    {
        return;
    }
    while (s[_INDEX] != '\0')
    {
        write(fd, &s[_INDEX], 1);
        _INDEX++;
    }
}


int main(void)
{
    ft_putstr_fd("hello", 1);

    return 0;
}