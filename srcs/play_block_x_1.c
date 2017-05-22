/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_block_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:34:03 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/06 19:04:42 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	int		ft_play_down_left(t_data *data, t_piece *piece)
{
	int			x;
	int			y;

	x = -1;
	while (++x < data->wmap)
	{
		y = data->hmap;
		while (--y > 0)
		{
			if (try_place_block_b(data, piece, x, y) == 1)
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
	while (--x > 0)
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

	x = -1;
	while (++x < data->wmap)
	{
		y = -1;
		while (++y < data->hmap)
		{
			if (try_place_block_a(data, piece, x, y) == 1)
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

int				play_block_x_1(t_data *data, t_piece *piece)
{
	if (cheeck_down_o(data) == 0 && cheeck_down_point(data) == 1)
	{
		if (ft_play_down_right(data, piece) == 1)
			return (1);
	}
	else if (cheeck_left_o(data) == 0)
	{
		if (ft_play_up_left(data, piece) == 1)
			return (1);
	}
	else if (cheeck_right_point(data) == 1 && cheeck_x(data) == 1)
	{
		if (ft_play_up_right(data, piece) == 1)
			return (1);
	}
	else if (ft_play_down_left(data, piece) == 1)
		return (1);
	return (0);
}
