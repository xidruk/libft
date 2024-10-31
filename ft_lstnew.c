/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:46:06 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/29 17:19:50 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *__NEW_NODE;

    __NEW_NODE = (t_list *)malloc(sizeof(t_list));
    
    if (!__NEW_NODE)
    {
        return NULL;
    }
    __NEW_NODE->content = content;
    __NEW_NODE->next = NULL;

    return (__NEW_NODE);
}



