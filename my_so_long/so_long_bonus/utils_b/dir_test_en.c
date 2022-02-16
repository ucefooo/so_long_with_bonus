/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_test_en.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:58:07 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 19:01:36 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	test_righten(t_vars *vars)
{
	if (vars->s[vars->ind_ien][vars->ind_jen + 1] == '0')
		move_righten(vars);
}

void	test_downen(t_vars *vars)
{
	if (vars->s[vars->ind_ien + 1][vars->ind_jen] == '0')
		move_downen(vars);
}

void	test_leften(t_vars *vars)
{
	if (vars->s[vars->ind_ien][vars->ind_jen - 1] == '0')
		move_leften(vars);
}

void	test_upen(t_vars *vars)
{
	if (vars->s[vars->ind_ien - 1][vars->ind_jen] == '0')
		move_upen(vars);
}
