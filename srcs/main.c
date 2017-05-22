/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 22:11:55 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 23:38:22 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int				main(void)
{
	t_data		data;
	t_piece		piece;

	ft_bzero(&data, 0);
	ft_bzero(&piece, 0);
	get_data(&data);
	data.test = 0;
	while (1)
	{
		if (data.player == 1)
		{
			if (player1(&data, &piece) == 0)
				break ;
		}
		else if (data.player == 2)
		{
			if (player2(&data, &piece) == 0)
				break ;
		}
	}
	return (0);
}
