/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atam <atam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:47:05 by atam              #+#    #+#             */
/*   Updated: 2024/07/22 17:15:35 by atam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		if (i == 1)
			return (nb);
		i--;
	}
	if (nb == 0 || nb == 1)
		return (1);
	return (0);
}
