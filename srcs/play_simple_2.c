/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_simple_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 20:13:55 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/06 18:50:28 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	try_place(t_data *data, t_piece *piece, int x, int y)
{
	int		i;
	int		j;
	int		n;

	i = -1;
	n = 0;
	while (++i < piece->wpiece && i + x < data->wmap)
	{
		j = -1;
		while (++j < piece->hpiece && j + y < data->hmap)
		{
			if ((piece->piece[j][i] == '*' && (data->map[y + j][x + i] ==
			data->letter)) || (piece->piece[j][i] == '*' &&
			(data->map[y + j][x + i] == data->letter + 32)))
				n++;
			else if (piece->piece[j][i] != '.' &&
					(data->map[y + j][x + i] != '.'))
				return (0);
		}
	}
	if (n == 1 && (i == piece->wpiece) && (j == piece->hpiece))
		return (1);
	return (0);
}

int			play_simple_2(t_data *data, t_piece *piece)
{
	int		x;
	int		y;

	x = -1;
	while (++x < data->wmap)
	{
		y = -1;
		while (++y < data->hmap)
		{
			if (try_place(data, piece, x, y) == 1)
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
