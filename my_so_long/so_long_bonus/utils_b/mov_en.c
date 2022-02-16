/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_en.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:34:49 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 19:07:58 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	change_indiceen(char *c, char *v)
{
	*c = '0';
	*v = 'N';
}

int	key_hooken(t_vars *vars)
{
	if (vars->s[vars->ind_ien][vars->ind_jen + 1] == '0')
		test_righten(vars);
	else if (vars->s[vars->ind_ien + 1][vars->ind_jen] == '0')
		test_downen(vars);
	else if (vars->s[vars->ind_ien][vars->ind_jen - 1] == '0')
		test_leften(vars);
	else if (vars->s[vars->ind_ien - 1][vars->ind_jen] == '0')
		test_upen(vars);
	mlx_clear_window(vars->mlx, vars->win);
	render(vars);
	return (0);
}

int	find_pjen(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'N')
				return (j);
			j++;
		}
		i++;
	}
	return (-1);
}

int	find_pien(char **p)
{
	int	i;
	int	j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == 'N')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

void	ft_putnbr(int n)
{
	long long	k;

	k = n;
	if (k < 0)
	{
		ft_putchar('-');
		k *= -1;
	}
	if (k >= 10)
		ft_putnbr(k / 10);
	ft_putchar(k % 10 + 48);
}
