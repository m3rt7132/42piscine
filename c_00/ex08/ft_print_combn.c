/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:41:51 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/26 13:33:54 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// line 25 exceeded, used a new function, print all combinations
void	ft_print_combs(char*combs, int n, int i)
{
	while (1)
	{
		write(1, combs, n);

		if (combs[0] == ('9' - n + 1))
			break ;

		write(1, ", ", 2);

		i = n - 1;

		while (i >= 0 && combs[i] == ('9' - (n - 1 - i)))
			i--;

		combs[i]++;
		while (++i < n)
			combs[i] = combs[i - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	char	combs[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;

	i = 0;

	while (i < n)
	{
		combs[i] = i + '0';
		i++;
	}

	ft_print_combs(combs, n, i);
}

int main() {
ft_print_combn(9);
return 0;
}