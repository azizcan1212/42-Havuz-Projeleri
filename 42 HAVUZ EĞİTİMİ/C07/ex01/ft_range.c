/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atam <atam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:18:18 by atam              #+#    #+#             */
/*   Updated: 2024/07/25 07:10:53 by atam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	index;

	d = malloc((max - min) * sizeof(4));
	if (min >= max)
		return (NULL);
	if (d == NULL)
		return (0);
	index = 0;
	while (index < (max - min))
	{
		d[index] = min + index;
		index ++;
	}
	return (d);
}
