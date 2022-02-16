/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:42:18 by youssama          #+#    #+#             */
/*   Updated: 2022/02/09 17:44:22 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	change_indice(char *c, char *v)
{
	*c = '0';
	*v = 'P';
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == 53)
		exit_1(vars, keycode);
	if (keycode == 2)
		if ((vars->s[vars->ind_i][vars->ind_j + 1] == '0'
			|| vars->s[vars->ind_i][vars->ind_j + 1] == 'C'
			|| vars->s[vars->ind_i][vars->ind_j + 1] == 'E'))
			test_right(vars);
	if (keycode == 1)
		if ((vars->s[vars->ind_i + 1][vars->ind_j] == '0'
			|| vars->s[vars->ind_i + 1][vars->ind_j] == 'C'
			|| vars->s[vars->ind_i + 1][vars->ind_j] == 'E'))
			test_down(vars);
	if (keycode == 0)
		if ((vars->s[vars->ind_i][vars->ind_j - 1] == '0'
			|| vars->s[vars->ind_i][vars->ind_j - 1] == 'C'
			|| vars->s[vars->ind_i][vars->ind_j - 1] == 'E'))
			test_left(vars);
	if (keycode == 13)
		if ((vars->s[vars->ind_i - 1][vars->ind_j] == '0'
			|| vars->s[vars->ind_i - 1][vars->ind_j] == 'C'
			|| vars->s[vars->ind_i - 1][vars->ind_j] == 'E'))
			test_up(vars);
	mlx_clear_window(vars->mlx, vars->win);
	render(vars);
	return (0);
}
