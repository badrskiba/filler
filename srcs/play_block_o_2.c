/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_block_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:34:03 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 20:21:04 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	int		ft_play_down_left(t_data *data, t_piece *piece)
{
	int			x;
	int			y;

	x = -1;
	while (++x < data->wmap * 3 / 4)
	{
		y = data->hmap;
		while (--y > data->hmap / 2)
		{
			if (try_place_block_c(data, piece, x, y) == 1)
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

static	int		ft_play_up_right(t_data *data, t_piece *piece)
{
	int			x;
	int			y;

	x = data->wmap;
	while (--x > data->wmap / 2)
	{
		y = -1;
		while (++y < data->hmap)
		{
			if (try_place_block_c(data, piece, x, y) == 1)
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

int				play_block_o_2(t_data *data, t_piece *piece)
{
	if (cheeck_down_x(data) == 0)
	{
		if (ft_play_down_left(data, piece) == 1)
			return (1);
	}
	else if (data->test < 5)
	{
		data->test = data->test + 1;
		if (ft_play_up_right(data, piece) == 1)
			return (1);
	}
	else if (cheeck_left_x_2(data) == 1)
	{
		if (data->test < 15)
		{
			data->test = data->test + 1;
			if (ft_play_up_right(data, piece) == 1)
				return (1);
		}
	}
	return (0);
}
