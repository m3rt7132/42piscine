/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:02:40 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/06 14:02:40 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
