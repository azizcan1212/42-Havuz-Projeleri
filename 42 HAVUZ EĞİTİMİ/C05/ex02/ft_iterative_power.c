/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atam <atam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:49:58 by atam              #+#    #+#             */
/*   Updated: 2024/07/22 17:19:37 by atam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power >= 0)
	{
		if (power > 1)
			result *= nb;
		else if (power == 1)
			return (result);
		else
			return (1);
		power --;
	}
	return (0);
}
