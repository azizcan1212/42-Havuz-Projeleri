/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atam <atam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:09:20 by atam              #+#    #+#             */
/*   Updated: 2024/07/23 16:18:24 by atam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] && argc)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	b;
	int	i;

	ft_sort(argc, argv);
	b = 1;
	while (argv[b] != NULL)
	{
		i = 0;
		while (argv[b][i] != '\0')
		{
			write(1, &argv[b][i], 1);
			i++;
		}
		write(1, "\n", 1);
		b++;
	}
	return (0);
}
