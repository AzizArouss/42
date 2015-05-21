/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:14:05 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/20 15:46:10 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

# include <string.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void		ft_lstpushback(t_list **head, void *data, size_t size);
void		ft_lstpushfront(t_list **head, void *data, size_t size);
void		ft_remove_node(t_list **list, t_list *node);
t_list		*ft_lstchr(t_list **list, char c);
void		ft_lstcuthead(t_list **head, t_list *new_head);
void		ft_lstclean(t_list **list);

#endif
