/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map_en_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:27:56 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 19:17:31 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_righten(t_vars *vars)
{
	change_indiceen(&(vars->s[vars->ind_ien][vars->ind_jen]),
		&(vars->s[vars->ind_ien][vars->ind_jen + 1]));
	vars->ind_jen += 1;
}

void	move_downen(t_vars *vars)
{
	change_indiceen(&(vars->s[vars->ind_ien][vars->ind_jen]),
		&(vars->s[vars->ind_ien + 1][vars->ind_jen]));
	vars->ind_ien += 1;
}

void	move_leften(t_vars *vars)
{
	change_indiceen(&(vars->s[vars->ind_ien][vars->ind_jen]),
		&(vars->s[vars->ind_ien][vars->ind_jen - 1]));
	vars->ind_jen -= 1;
}

void	move_upen(t_vars *vars)
{
	change_indiceen(&(vars->s[vars->ind_ien][vars->ind_jen]),
		&(vars->s[vars->ind_ien - 1][vars->ind_jen]));
	vars->ind_ien -= 1;
}
