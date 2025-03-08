/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink<mecetink>@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:26:47 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/20 19:34:22 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	str[5];

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			str[0] = (first / 10) + '0';
			str[1] = (first % 10) + '0';
			str[2] = ' ';
			str[3] = (second / 10) + '0';
			str[4] = (second % 10) + '0';
			write(1, str, 5);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
