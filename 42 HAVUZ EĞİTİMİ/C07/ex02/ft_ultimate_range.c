/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atam <atam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:18:03 by atam              #+#    #+#             */
/*   Updated: 2024/07/25 07:12:08 by atam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*d;
	int	index;

	d = malloc((max - min) * sizeof(4));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (d == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	index = 0;
	while (index < (max - min))
	{
		(*range)[index] = min + index;
		index ++;
	}
	return (index);
}
