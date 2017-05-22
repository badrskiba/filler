/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 23:12:14 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/13 01:48:39 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct		s_data
{
	int				player;
	int				hmap;
	int				wmap;
	int				poso_x;
	int				poso_y;
	int				my_pos_x;
	int				my_pos_y;
	int				test;
	int				strat;
	int				one;
	int				pos_a;
	int				pos_b;
	char			**map;
	char			letter;
}					t_data;

typedef struct		s_piece
{
	int				hpiece;
	int				wpiece;
	int				i;
	int				j;
	char			**piece;
}					t_piece;

void				get_data(t_data *data);
void				get_map(t_data *data, t_piece *piece);

int					try_place_block_d(t_data *data, t_piece *piece,
					int x, int y);
int					try_place_block_c(t_data *data, t_piece *piece,
					int x, int y);
int					try_place_block_b(t_data *data, t_piece *piece,
					int x, int y);
int					try_place_block_a(t_data *data, t_piece *piece,
					int x, int y);

int					cheeck_right_o(t_data *data);
int					cheeck_left_o(t_data *data);
int					cheeck_left_o_2(t_data *data);
int					cheeck_top_o(t_data *data);
int					cheeck_down_o(t_data *data);

int					cheeck_right_x(t_data *data);
int					cheeck_right_x_2(t_data *data);
int					cheeck_left_x(t_data *data);
int					cheeck_left_x_2(t_data *data);
int					cheeck_top_x(t_data *data);
int					cheeck_down_x(t_data *data);

int					cheeck_down_point(t_data *data);
int					cheeck_top_point(t_data *data);
int					cheeck_left_point(t_data *data);
int					cheeck_right_point(t_data *data);
int					cheeck_right_point_2(t_data *data);

int					cheeck_x(t_data *data);
int					cheeck_poso(t_data *data);

int					play_simple(t_data *data, t_piece *piece);
int					play_simple_2(t_data *data, t_piece *piece);

int					player1(t_data *data, t_piece *piece);
int					play_block_x(t_data *data, t_piece *piece);
int					play_block_x_1(t_data *data, t_piece *piece);
int					play_block_x_2(t_data *data, t_piece *piece);
int					play_block_x_3(t_data *data, t_piece *piece);
int					play_hard_x(t_data *data, t_piece *piece);
int					try_place_hard_a(t_data *data);
int					try_place_hard_b(t_data *data);

int					player2(t_data *data, t_piece *piece);
int					play_block_o(t_data *data, t_piece *piece);
int					play_block_o_1(t_data *data, t_piece *piece);
int					play_block_o_2(t_data *data, t_piece *piece);
int					play_block_o_3(t_data *data, t_piece *piece);

#endif
