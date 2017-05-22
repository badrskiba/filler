/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_block_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:34:03 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/10 16:18:39 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int				play_block_x(t_data *data, t_piece *piece)
{
	if (data->my_pos_y > data->hmap / 2 && data->my_pos_x < data->hmap / 2)
	{
		if (play_block_x_3(data, piece) == 1)
			return (1);
	}
	else if (data->strat == 1)
	{
		if (play_block_x_2(data, piece) == 1)
			return (1);
	}
	else if (data->strat == 0)
	{
		if (play_block_x_1(data, piece) == 1)
			return (1);
	}
	return (0);
}
