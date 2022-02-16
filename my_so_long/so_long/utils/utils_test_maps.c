/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_test_maps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:20 by youssama          #+#    #+#             */
/*   Updated: 2022/02/11 07:44:19 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	find_c(char **p, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	cal_colec(t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	vars->collect = 0;
	while (vars->s[i])
	{
		j = 0;
		while (vars->s[i][j])
		{
			if (vars->s[i][j] == 'C')
			{
				vars->collect += 1;
			}
			j++;
		}
		i++;
	}
}

int	find_pj(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'P')
				return (j);
			j++;
		}
		i++;
	}
	return (-1);
}

int	find_pi(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'P')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int	test_newline(char *tr)
{
	int	i;

	i = 0;
	if (!tr)
		return (0);
	while (tr[i])
	{
		if (tr[i] == '\n' && tr[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}
