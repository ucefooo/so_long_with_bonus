/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <youssama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:01:40 by youssama          #+#    #+#             */
/*   Updated: 2022/02/16 20:22:13 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_vars{
	char	**s;
	void	*mlx;
	void	*win;
	void	*img;
	void	*wall;
	void	*free;
	void	*gold;
	void	*me;
	void	*exit;
	void	*enemy;
	int		t;
	int		w;
	int		i;
	int		y;
	int		prev;
	int		ind_i;
	int		ind_j;
	int		tb_y;
	int		tb_z;
	int		tb_i;
	int		tb_j;
	int		collect;
	int		moves;
	int		width;
	int		height;
	int		wid;
	int		hei;
	int		frame;
	int		ind_ien;
	int		ind_jen;
}		t_vars;

int		exit_2(t_vars *vars);
void	test_right(t_vars *vars);
void	test_down(t_vars *vars);
void	test_left(t_vars *vars);
void	test_up(t_vars *vars);
void	exit_1(t_vars *vars, int keycode, char c);
void	move_right(t_vars *vars);
void	move_down(t_vars *vars);
void	move_left(t_vars *vars);
void	move_up(t_vars *vars);
void	change_indice(char *c, char *v);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		key_hook(int keycode, t_vars *vars);
void	test_map_put_photo(t_vars *vars);
int		render(t_vars *vars);
char	**ft_split(char const *s, char c);
int		test_map(char **p);
int		find_c(char **p, char c);
void	cal_colec(t_vars *vars);
int		find_pj(char **p);
int		find_pi(char **p);
int		ft_strlen(char *p);
void	exit_map(void);
int		test_newline(char *tr);
int		key_hooken(t_vars *vars);
int		change_wall(t_vars *vars);
void	test_righten(t_vars *vars);
void	test_downen(t_vars *vars);
void	test_leften(t_vars *vars);
void	test_upen(t_vars *vars);
void	move_righten(t_vars *vars);
void	move_downen(t_vars *vars);
void	move_leften(t_vars *vars);
void	move_upen(t_vars *vars);
void	change_indiceen(char *c, char *v);
int		find_pien(char **p);
int		find_pjen(char **p);
int		test_newline(char *tr);
char	*ft_itoa(int n);
void	anime_gold(t_vars *vars);

#endif
