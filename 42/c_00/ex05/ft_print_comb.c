/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink<mecetink@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:54:46 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/20 17:55:16 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	secnd;
	int	third;

	first = '0';
	while (first <= '7')
	{
		secnd = first + 1;
		while (secnd <= '8')
		{
			third = secnd + 1;
			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &secnd, 1);
				write(1, &third, 1);
				if (first != '7')
					write(1, ", ", 2);
				third++;
			}
			secnd++;
		}
		first++;
	}
}
