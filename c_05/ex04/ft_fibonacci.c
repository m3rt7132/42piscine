/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:11:37 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/06 13:11:37 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long int memo[10000];

long int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);

	if (memo[index] != -1)
		return memo[index];

	memo[index] = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return memo[index];
}

#include <stdio.h>
int main() {
	for (int i = 0; i < 10000; i++)
	{
		memo[i] = -1;
	}
	

	printf("%ld", ft_fibonacci(150));     
}
