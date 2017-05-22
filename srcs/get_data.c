/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 22:10:16 by bskiba            #+#    #+#             */
/*   Updated: 2017/04/12 23:56:36 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	ft_length(int nbr)
{
	int		i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

void		get_data(t_data *data)
{
	char	*line;
	int		a;

	a = 0;
	get_next_line(0, &line);
	if ((data->player = ft_atoi(&line[10])) == 1)
		data->letter = 'O';
	else
		data->letter = 'X';
	get_next_line(0, &line);
	data->hmap = ft_atoi(&line[8]);
	a = ft_length(data->hmap);
	data->wmap = ft_atoi(&line[8 + a + 1]);
}
