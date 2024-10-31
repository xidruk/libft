/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:48:37 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/26 05:04:32 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int _INDEX;

    _INDEX = 0;
    if(!s)
        return ;
    if(fd == 0)
        return ;
    while (s[_INDEX] != '\0')
    {
        write(fd, &s[_INDEX], 1);
        _INDEX++;
    }
    write(fd, "\n", 1);
}


int main()
{

    ft_putendl_fd("khalid", 1);

    return 0;
}