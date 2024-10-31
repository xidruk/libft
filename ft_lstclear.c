/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:56:42 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/30 01:12:39 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void dall_free(void *data)
{
    free(data);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *___CURRENT_NODE;
    t_list *__NEXT_NODE;

    if(!lst || !del)
    {
        return ;
    }

    ___CURRENT_NODE = *lst;
    
    while (___CURRENT_NODE != NULL)
    {
        __NEXT_NODE = ___CURRENT_NODE->next;
        del(___CURRENT_NODE->content);
        free(___CURRENT_NODE);
        ___CURRENT_NODE = __NEXT_NODE;
    }
    *lst = NULL;
}