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

void ft_print_combn(int n)
{
	char comb[10];
	int i;

	if (n <= 0 || n >= 10)
		return;
	i = 0;
	while (i < n) // create first comb (012)
	{
		comb[i] = i + '0';
		i++;
	}
	while (1)
	{
		write(1, comb, n);
		if (comb[0] == '9' - n + 1) // stop if its last combination
			break;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && comb[i] == '9' - (n - 1 - i)) // find next combination
			i--;
		comb[i]++;		// increase found digit
		while (++i < n) // update rest of digit
			comb[i] = comb[i - 1] + 1;
	}
}

int main()
{
	ft_print_combn(5);
	return 0;
}