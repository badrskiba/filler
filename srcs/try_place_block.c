/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_place_block.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 23:07:53 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/10 15:54:14 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	try_place_block_d(t_data *data, t_piece *piece, int x, int y)
{
	int i;
	int j;
	int n;

	i = -1;
	n = 0;
	while (++i < piece->wpiece && i + x < data->wmap)
	{
		j = -1;
		while (++j < piece->hpiece && j + y < data->hmap)
		{
			if ((piece->piece[j][i] != '.' && (data->map[y + j][x + i] ==
							data->letter)) || (piece->piece[j][i] == '*' &&
							(data->map[y + j][x + i] == data->letter + 32)))
				n++;
			else if (piece->piece[j][i] != '.' &&
					data->map[y + j][x + i] != '.')
				return (0);
		}
	}
	if (n == 1 && (i == piece->wpiece) && (j == piece->hpiece))
		return (1);
	return (0);
}

int	try_place_block_c(t_data *data, t_piece *piece, int x, int y)
{
	int i;
	int j;
	int n;

	i = -1;
	n = 0;
	while (++i < piece->wpiece && i + x < data->wmap)
	{
		j = -1;
		while (++j < piece->hpiece && j + y < data->hmap)
		{
			if ((piece->piece[j][i] != '.' && (data->map[y + j][x + i] ==
							data->letter)) || (piece->piece[j][i] == '*' &&
							(data->map[y + j][x + i] == data->letter + 32)))
				n++;
			else if (piece->piece[j][i] != '.' &&
					data->map[y + j][x + i] != '.')
				return (0);
		}
	}
	if (n == 1 && (i == piece->wpiece) && (j == piece->hpiece))
		return (1);
	return (0);
}

int	try_place_block_b(t_data *data, t_piece *piece, int x, int y)
{
	int i;
	int j;
	int n;

	i = -1;
	n = 0;
	while (++i < piece->wpiece && i + x < data->wmap)
	{
		j = -1;
		while (++j < piece->hpiece && j + y < data->hmap)
		{
			if ((piece->piece[j][i] != '.' && (data->map[y + j][x + i] ==
							data->letter)) || (piece->piece[j][i] == '*' &&
							(data->map[y + j][x + i] == data->letter + 32)))
				n++;
			else if (piece->piece[j][i] != '.' &&
					data->map[y + j][x + i] != '.')
				return (0);
		}
	}
	if (n == 1 && (i == piece->wpiece) && (j == piece->hpiece))
		return (1);
	return (0);
}

int	try_place_block_a(t_data *data, t_piece *piece, int x, int y)
{
	int i;
	int j;
	int n;

	i = -1;
	n = 0;
	while (++i < piece->wpiece && i + x < data->wmap)
	{
		j = -1;
		while (++j < piece->hpiece && j + y < data->hmap)
		{
			if ((piece->piece[j][i] != '.' && (data->map[y + j][x + i] ==
							data->letter)) || (piece->piece[j][i] == '*' &&
							(data->map[y + j][x + i] == data->letter + 32)))
				n++;
			else if (piece->piece[j][i] != '.' &&
					data->map[y + j][x + i] != '.')
				return (0);
		}
	}
	if (n == 1 && (i == piece->wpiece) && (j == piece->hpiece))
		return (1);
	return (0);
}
