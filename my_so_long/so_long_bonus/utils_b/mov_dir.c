/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:37:27 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 19:03:12 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	exit_1(t_vars *vars, int keycode, char c)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		ft_putstr("you ouut ech\n");
		exit (0);
	}
	if (c == 'N')
	{
		mlx_destroy_window(vars->mlx, vars->win);
		ft_putstr("you ouut you lose\n");
		exit (0);
	}
	mlx_destroy_window(vars->mlx, vars->win);
	ft_putstr("you winn\n");
	exit (0);
}

void	move_right(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i][vars->ind_j + 1] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i][vars->ind_j + 1]));
	vars->ind_j += 1;
}

void	move_down(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i + 1][vars->ind_j] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i + 1][vars->ind_j]));
	vars->ind_i += 1;
}

void	move_left(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i][vars->ind_j - 1] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i][vars->ind_j - 1]));
	vars->ind_j -= 1;
}

void	move_up(t_vars *vars)
{
	ft_putstr("MOVES: ");
	ft_putnbr(vars->moves++);
	ft_putstr("\n");
	if (vars->s[vars->ind_i - 1][vars->ind_j] == 'C')
		vars->collect -= 1;
	change_indice(&(vars->s[vars->ind_i][vars->ind_j]),
		&(vars->s[vars->ind_i - 1][vars->ind_j]));
	vars->ind_i -= 1;
}
