/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_block_X.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:34:03 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 21:30:59 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int				play_block_o(t_data *data, t_piece *piece)
{
	if (data->my_pos_y > data->hmap / 2 && data->my_pos_x > data->wmap / 2
			&& data->my_pos_x < 18)
	{
		if (play_block_o_3(data, piece) == 1)
			return (1);
	}
	else if (data->strat == 0)
	{
		if (play_block_o_2(data, piece) == 1)
			return (1);
	}
	else if (data->my_pos_y < data->hmap / 2 &&
			data->my_pos_x < data->wmap / 2)
	{
		if (play_block_o_1(data, piece) == 1)
			return (1);
	}
	return (0);
}
