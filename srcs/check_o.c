/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 18:33:48 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/11 04:50:25 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			cheeck_right_o(t_data *data)
{
	int		y;

	y = -1;
	while (++y < data->hmap / 2)
	{
		if (data->map[y][data->wmap - 1] == 'O')
			return (1);
	}
	return (0);
}

int			cheeck_left_o(t_data *data)
{
	int		y;

	y = data->hmap;
	while (--y > data->hmap * 3 / 4 + 30)
	{
		if (data->map[y][0] == 'O')
			return (1);
	}
	return (0);
}

int			cheeck_top_o(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[1][x] == 'O')
		{
			return (1);
		}
	}
	return (0);
}

int			cheeck_down_o(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[data->hmap - 1][x] == 'O')
			return (1);
	}
	return (0);
}

int			cheeck_x(t_data *data)
{
	int		x;
	int		y;

	x = data->wmap;
	while (--x >= data->wmap / 2)
	{
		y = data->hmap;
		while (--y >= data->hmap * 3 / 4)
		{
			if (data->map[y][x] == 'X')
				return (1);
		}
	}
	return (0);
}
