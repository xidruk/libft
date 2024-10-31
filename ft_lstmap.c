/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:32:48 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/30 03:18:50 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *__NEW_LINKED_LIST; // this is the new list 
    t_list *__HEAD_OF_LLIST; // head of linked list 

    if (!lst || !f || !del)
    {
        return (0);
    }
    

    // create the first node in the new list ! 
    __NEW_LINKED_LIST = ft_lstnew(f(lst->content));
    if (!__NEW_LINKED_LIST)
    {
        return 0;
    }
    __HEAD_OF_LLIST = __NEW_LINKED_LIST;
    lst = lst->next;
    while (lst)
    {
        __NEW_LINKED_LIST = ft_lstnew(ft(lst->content));
        if(!__NEW_LINKED_LIST->next)
        {
            ft_lstclear(&__HEAD_OF_LLIST, del);
            return 0;
        }
        __NEW_LINKED_LIST = __NEW_LINKED_LIST->next;
        lst = lst->next;
    }
    __NEW_LINKED_LIST->next = NULL;
    return (__HEAD_OF_LLIST);
}