/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 12:13:18 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/28 16:01:51 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_pt	**ft_addline(t_pt **grid, char **tab, t_env *e)
{
	int		i;
	int		j;
	t_pt	**ret;

	i = 0;
	while (grid[i])
		++i;
	ret = (t_pt**)ft_xmalloc(sizeof(t_pt*) * (i + 2));
	i = -1;
	while (grid[++i])
		ret[i] = grid[i];
	free(grid);
	j = 0;
	while (tab[j])
		++j;
	e->width = (j < e->width) ? j : e->width;
	ret[i] = (t_pt*)ft_xmalloc(sizeof(t_pt) * j);
	j = -1;
	e->z_min = ft_atoi(tab[0]);
	e->z_max = ft_atoi(tab[0]);
	while (tab[++j])
		ret[i][j].z = ft_atoi(tab[j]);
	ret[++i] = NULL;
	return (ret);
}

void	ft_getinput(t_env *e, char *av)
{
	int		j;
	int		fd;
	char	*s;
	char	**tab;

	if ((fd = open(av, O_RDONLY)) == -1)
		ft_error("The file has not been read.");
	e->height = 0;
	e->width = 0x0FFFFFFF;
	e->grid = (t_pt**)ft_xmalloc(sizeof(t_pt*));
	e->grid[0] = NULL;
	while (get_next_line(fd, &s) > 0 && ++(e->height))
	{
		if (!(tab = ft_strsplit(s, ' ')) || !tab[0])
			ft_error("The line can't be split.");
		e->grid = ft_addline(e->grid, tab, e);
		free(s);
		j = 0;
		while (tab[j])
			free(tab[j++]);
		free(tab);
	}
	close(fd);
}

void	ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	exit(1);
}

void	*ft_xmalloc(size_t size)
{
	void	*res;

	if ((res = (void*)malloc(size)) == NULL)
		ft_error("Unable to allocate memory.");
	return (res);
}

int		main(int ac, char **av)
{
	t_env	e;

	if (ac != 2)
		ft_error("See use the compilation.");
	ft_getinput(&e, av[1]);
	if (!(e.mlx = mlx_init()))
		ft_error("Error init.");
	if (!(e.win = mlx_new_window(e.mlx, WIDTH, HEIGHT, "fdf")))
		ft_error("The window could not be created.");
	if (!(e.img = mlx_new_image(e.mlx, WIDTH, HEIGHT)))
		ft_error("The picture could not be created.");
	if (!(e.table = mlx_get_data_addr(e.img, &e.bpp, &e.size, &e.endian)))
		ft_error("The data could not be created.");
	e.zoom = 10;
	e.r = 0xcc;
	e.g = 0xcc;
	e.b = 0xcc;
	ft_center(&e, 0, 0, 0);
	ft_draw(&e);
	mlx_expose_hook(e.win, &ft_exposehook, &e);
	mlx_hook(e.win, KeyPress, KeyPressMask, &ft_keypress, &e);
	mlx_loop(e.mlx);
	return (0);
}
