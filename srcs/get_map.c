/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 19:25:50 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 23:59:14 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void		cheek_pos_o(t_data *data)
{
	int j;
	int i;

	if (data->one == 1)
		return ;
	i = -1;
	data->one = 1;
	while (++i < data->wmap)
	{
		j = -1;
		while (++j < data->hmap)
		{
			if (data->map[j][i] == 'X')
			{
				data->poso_x = i;
				data->poso_y = j;
			}
			if (data->map[j][i] == data->letter)
			{
				data->my_pos_x = i;
				data->my_pos_y = j;
			}
		}
	}
	data->strat = (data->poso_y > data->my_pos_y) ? 0 : 1;
}

static void		cheek_pos_x(t_data *data)
{
	int j;
	int i;

	if (data->one == 1)
		return ;
	i = -1;
	data->one = 1;
	while (++i < data->wmap)
	{
		j = -1;
		while (++j < data->hmap)
		{
			if (data->map[j][i] == 'O')
			{
				data->poso_x = i;
				data->poso_y = j;
			}
			if (data->map[j][i] == data->letter)
			{
				data->my_pos_x = i;
				data->my_pos_y = j;
			}
		}
	}
	data->strat = (data->poso_y > data->my_pos_y) ? 1 : 0;
}

static void		get_piece(t_piece *piece)
{
	char		*line;
	int			i;
	char		*tmp;
	int			maxhight;

	i = 0;
	maxhight = 0;
	tmp = "\0";
	get_next_line(0, &line);
	while (!ft_isdigit(line[i]))
		i++;
	piece->hpiece = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]))
		i++;
	i++;
	piece->wpiece = ft_atoi(&line[i]);
	while (get_next_line(0, &line) > 0)
	{
		tmp = ft_strjoin(tmp, &line[0]);
		tmp = ft_strjoin(tmp, "\n");
		maxhight++;
		if (maxhight == piece->hpiece)
			break ;
	}
	piece->piece = ft_strsplit(tmp, '\n');
}

void			get_map(t_data *data, t_piece *piece)
{
	char		*line;
	int			maxline;
	char		*tmp;

	tmp = "\0";
	maxline = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (ft_isdigit(line[0]) == 1)
		{
			tmp = ft_strjoin(tmp, &line[4]);
			tmp = ft_strjoin(tmp, "\n");
			maxline++;
		}
		if (maxline == data->hmap)
			break ;
	}
	data->map = ft_strsplit(tmp, '\n');
	get_piece(piece);
	if (data->letter == 'O')
		cheek_pos_o(data);
	else if (data->letter == 'X')
		cheek_pos_x(data);
}
