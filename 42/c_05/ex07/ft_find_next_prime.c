/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:11:47 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/06 13:11:47 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	else
		nb += 2;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
