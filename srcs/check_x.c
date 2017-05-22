/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 18:34:18 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/10 15:45:39 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			cheeck_right_x(t_data *data)
{
	int		y;

	y = -1;
	while (++y < data->hmap / 2)
	{
		if (data->map[y][data->wmap - 1] == 'X')
			return (1);
	}
	return (0);
}

int			cheeck_left_x(t_data *data)
{
	int		y;

	y = data->hmap;
	while (--y > data->hmap * 3 / 4)
	{
		if (data->map[y][0] == 'X')
			return (1);
	}
	return (0);
}

int			cheeck_top_x(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[0][x] == 'X')
			return (1);
	}
	return (0);
}

int			cheeck_down_x(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[data->hmap - 1][x] == 'X')
			return (1);
	}
	return (0);
}

int			cheeck_poso(t_data *data)
{
	int		x;
	int		y;

	x = data->wmap;
	while (--x >= data->wmap / 2)
	{
		y = data->hmap;
		while (--y >= data->hmap * 3 / 4)
		{
			if (data->map[y][x] == 'O')
				return (0);
		}
	}
	return (1);
}
