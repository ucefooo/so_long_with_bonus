/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:58:54 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 20:20:55 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	test_v1(char *v)
{
	int	i;

	i = ft_strlen(v);
	if (i < 5)
		return (0);
	if (v[i - 1] != 'r' || v[i - 2] != 'e'
		|| v[i - 3] != 'b' || v[i - 4] != '.')
		return (0);
	return (1);
}

char	*gnl(int fd, char *tr)
{
	char	str;
	int		b;
	int		h;

	b = 1;
	h = 0;
	while (b != 0)
	{
		b = read(fd, &str, 1);
		if (b == -1)
			return (0);
		if (b != 0)
			tr[h++] = str;
		tr[h] = '\0';
	}
	if (h == 0)
		return (0);
	close (fd);
	return (tr);
}

void	inti_var(t_vars *vars, int fd, char *tr)
{
	vars->moves = 1;
	vars->s = ft_split(gnl(fd, tr), '\n');
	if (vars->s == NULL)
		return ;
	vars->ind_i = find_pi(vars->s);
	vars->ind_j = find_pj(vars->s);
	vars->ind_ien = find_pien(vars->s);
	vars->ind_jen = find_pjen(vars->s);
	cal_colec(vars);
	vars->tb_y = 0;
	vars->tb_z = -50;
	vars->tb_i = 0;
	vars->tb_j = 0;
	vars->mlx = mlx_init();
	vars->width = 0;
	vars->height = 0;
	while (vars->s[vars->height] != NULL)
		vars->height++;
	vars->height *= 50;
	vars->width = ft_strlen(vars->s[0]);
	vars->width *= 50;
}

void	start_win(t_vars *vars)
{
	vars->win = mlx_new_window(vars->mlx, vars->width,
			vars->height, "SO LONG BONUS");
	vars->wall = mlx_xpm_file_to_image(vars->mlx, "./img/wall.xpm",
			&vars->hei, &vars->wid);
	vars->me = mlx_xpm_file_to_image(vars->mlx, "./img/me.xpm",
			&vars->hei, &vars->wid);
	vars->gold = mlx_xpm_file_to_image(vars->mlx, "./img/gold.xpm",
			&vars->hei, &vars->wid);
	vars->exit = mlx_xpm_file_to_image(vars->mlx, "./img/exit.xpm",
			&vars->hei, &vars->wid);
	vars->free = mlx_xpm_file_to_image(vars->mlx, "./img/free.xpm",
			&vars->hei, &vars->wid);
	vars->enemy = mlx_xpm_file_to_image(vars->mlx, "./img/enemy.xpm",
			&vars->hei, &vars->wid);
	render(vars);
}

int	main(int argc, char **v)
{
	int		fd;
	char	tr[9999];
	t_vars	vars;

	if (argc != 2)
		return (0);
	if (test_v1(v[1]) == 0)
		exit_map();
	fd = open(v[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("errror fd\n");
		return (0);
	}
	inti_var(&vars, fd, tr);
	if (test_map(vars.s) == 0 || test_newline(tr) == 0)
	{
		ft_putstr("Error\nIN MAPS\n");
		return (0);
	}
	start_win(&vars);
	mlx_hook(vars.win, 2, 0, key_hook, &vars);
	mlx_hook(vars.win, 17, 0, exit_2, &vars);
	mlx_loop_hook(vars.mlx, change_wall, &vars);
	mlx_loop(vars.mlx);
}
