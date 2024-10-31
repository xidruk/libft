/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:30:28 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/29 22:40:51 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int ___COUNT_NODES;

    ___COUNT_NODES = 0;
    while (lst != NULL)
    {
        ___COUNT_NODES++;
        lst = lst->next;
    }
    return ___COUNT_NODES;
}

/*

This function count nodes of a linked list ! 
*/
