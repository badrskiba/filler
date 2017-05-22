/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_block_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:34:03 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 20:20:10 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	int		ft_play_down_right(t_data *data, t_piece *piece)
{
	int			x;
	int			y;

	x = data->wmap;
	while (--x > 0)
	{
		y = data->hmap;
		while (--y > 0)
		{
			if (try_place_block_d(data, piece, x, y) == 1)
			{
				ft_putnbr(y);
				ft_putchar(' ');
				ft_putnbr(x);
				ft_putchar('\n');
				return (1);
			}
		}
	}
	return (0);
}

static	int		ft_play_up_left(t_data *data, t_piece *piece)
{
	int			x;
	int			y;

	y = -1;
	while (++y < data->hmap)
	{
		x = -1;
		while (++x < data->wmap)
			if (try_place_block_a(data, piece, x, y) == 1)
			{
				ft_putnbr(y);
				ft_putchar(' ');
				ft_putnbr(x);
				ft_putchar('\n');
				return (1);
			}
	}
	return (0);
}

int				play_block_o_3(t_data *data, t_piece *piece)
{
	if (cheeck_top_x(data) == 1)
	{
		if (cheeck_right_x(data) == 0)
			if (ft_play_down_right(data, piece) == 1)
				return (1);
	}
	if (cheeck_left_x_2(data) == 0)
	{
		if (ft_play_up_left(data, piece) == 1)
			return (1);
	}
	else if (play_simple_2(data, piece) == 1)
		return (1);
	return (0);
}
