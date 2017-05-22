/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 22:35:15 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/11 04:56:02 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int		player1_next(t_data *data, t_piece *piece)
{
	if (play_block_x(data, piece) != 1)
		if (play_simple_2(data, piece) != 1)
		{
			ft_putnbr(0);
			ft_putchar(' ');
			ft_putnbr(0);
			ft_putchar('\n');
			return (0);
		}
	return (1);
}

int				player1(t_data *data, t_piece *piece)
{
	get_map(data, piece);
	if (data->strat == 0)
	{
		if (play_block_x(data, piece) != 1)
			if (play_simple(data, piece) != 1)
				if (play_simple_2(data, piece) != 1)
				{
					ft_putnbr(0);
					ft_putchar(' ');
					ft_putnbr(0);
					ft_putchar('\n');
					return (0);
				}
	}
	else if (data->strat == 1)
	{
		if (player1_next(data, piece) == 0)
			return (0);
	}
	return (1);
}
