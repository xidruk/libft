/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:08:57 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/26 06:32:47 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void _PRINT_NUMBER(int __NUMBER ,int fd)
{
    int __INDEX;
    char __NH[20];

    __INDEX = 0;
    while (__NUMBER > 0)
    {
        __NH[__INDEX++] = (__NUMBER % 10) + '0';
        __NUMBER /= 10;
    }
    while (__INDEX > 0)
    {
        write(fd, &__NH[--__INDEX], 1);
    }
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        write(fd, "0", 1);
        return ;
    }
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        n = - n;
        write(1, "-", 1);
    }
    _PRINT_NUMBER(n, fd);
}

int main(void)
{
    ft_putnbr_fd(101, 1);

    return 0;
}