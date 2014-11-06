/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/24 16:49:37 by aarouss           #+#    #+#             */
/*   Updated: 2014/07/24 18:05:12 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define TMP 4096
# include "unistd.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_list
{
	int			a;
	int			b;
	int			pos_a;
	int			pos_b;
	int			taille;
}				t_list;

typedef	struct	s_var
{
	char		empty;
	char		obst;
	char		full;
}				t_var;

char			ft_read(char *arg_txt);
void			ft_impression(char **position, t_list save, t_var symb);
void			transform_buf_position(char *buf, char **position, t_list save);
void			initialisation(char *buf, char **position, t_list save);
void			ft_posis(char **position, t_list save);
int				gestion_error(char *buf, int lg, t_var symb);
int				dtc_error(char *buf, int lg, t_var symb);
int				dtc_error_ligne(char *buf);
char			*get_stdin(int file_descriptor);
void			*ft_realloc(char *source, int old_size, int additional_size);
void			*ft_memcpy(char *dest, char *source, int n);
int				main(int argc, char **argv);
void			ft_prem(char *buf);
void			ft_action(char **position, t_var symb, t_list save);
int				ft_check(char **position, int n, t_var symb, t_list save);
int				ft_atoi_l(char *str, int length);
void			ft_putchar(char c);
void			ft_putstr(char *str);

#endif
