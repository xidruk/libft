/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:38:14 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/29 23:04:21 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(lst == NULL)
    {
        return NULL;
    }
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return lst;
}

int main()
{
    t_list *listv = NULL;

    int v1,v2,v3;

    v1 = 10; 
    v2 = 2;
    v3 = 3;

    t_list *node1 = ft_lstnew(&v1);
    t_list *node2 = ft_lstnew(&v2);
    t_list *node3 = ft_lstnew(&v3);


    ft_lstadd_front(&listv,node1);
    ft_lstadd_front(&listv,node2);
    ft_lstadd_front(&listv,node3);

    t_list *last_node = ft_lstlast(listv);

    if (last_node != NULL) {
        printf("The content of the last node is: %d\n", *(int *)last_node->content);
    } else {
        printf("The list is empty.\n");
    }
    

    free(node1);
    free(node2);
    free(node3);


    return 0;
}