/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 18:33:48 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/10 15:43:45 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			cheeck_right_point(t_data *data)
{
	int		y;

	y = -1;
	while (++y < data->hmap)
	{
		if (data->map[y][data->wmap - 1] == '.')
			return (1);
	}
	return (0);
}

int			cheeck_left_point(t_data *data)
{
	int		y;

	y = data->hmap;
	while (--y > 0)
	{
		if (data->map[y][0] == '.')
			return (1);
	}
	return (0);
}

int			cheeck_top_point(t_data *data)
{
	int		x;

	x = data->wmap / 2;
	while (--x > 0)
	{
		if (data->map[0][x] == '.')
			return (1);
	}
	return (0);
}

int			cheeck_mid_point(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[data->hmap / 2][x] != '.' &&
										data->map[data->hmap / 2][x] != 'O')
			return (0);
	}
	return (1);
}

int			cheeck_down_point(t_data *data)
{
	int		x;

	x = data->wmap;
	while (--x > 0)
	{
		if (data->map[data->hmap - 1][x] == '.')
			return (1);
	}
	return (0);
}
