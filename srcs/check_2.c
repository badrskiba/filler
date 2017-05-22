/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 18:33:48 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 20:17:44 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			cheeck_left_o_2(t_data *data)
{
	int		y;

	y = data->hmap;
	while (--y > 0)
	{
		if (data->map[y][0] == 'O')
			return (1);
	}
	return (0);
}

int			cheeck_right_point_2(t_data *data)
{
	int		y;

	y = 0;
	while (++y < data->hmap / 2)
	{
		if (data->map[y][data->wmap - 1] == '.')
			return (1);
	}
	return (0);
}

int			cheeck_right_x_2(t_data *data)
{
	int		y;

	y = 0;
	while (++y < data->hmap)
	{
		if (data->map[y][data->wmap - 1] == 'X')
			return (1);
	}
	return (0);
}

int			cheeck_left_x_2(t_data *data)
{
	int		y;

	y = 0;
	while (++y < data->hmap)
	{
		if (data->map[y][1] == 'X')
			return (1);
	}
	return (0);
}
