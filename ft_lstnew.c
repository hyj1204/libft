/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 20:40:11 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/28 20:40:13 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *tl;

    tl = (t_list *)malloc(sizeof(t_list));
    if (tl == NULL)
        return (NULL);
    if (content == NULL)
    {
        tl->content = NULL;
        tl->content_size = 0;
    }
    else
    {
        if ((tl->content = malloc(sizeof(t_list))) == NULL)
		{
			free(tl);
			return (NULL);
		}
        ft_memcpy(tl->content, content, content_size);
        tl->content_size = content_size;
    }
    tl->next = NULL;
    return (tl);
}
