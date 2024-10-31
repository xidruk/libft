/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:06:33 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/29 23:28:52 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *__LAST_NODE;
    if(*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        __LAST_NODE = *lst;
        while (__LAST_NODE->next != NULL)
        {
            __LAST_NODE = __LAST_NODE->next;
        }
        __LAST_NODE->next = new;
    }
    new->next = NULL;
}