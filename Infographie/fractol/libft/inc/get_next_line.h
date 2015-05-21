/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:10:20 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/20 15:43:44 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUF_SIZE 2048

# include "libft.h"
# include <string.h>
# include <unistd.h>

char	*extract_line_from_lst(t_list **list, t_list *nl_ptr);
int		get_next_line(int const fd, char **line);

#endif
