/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:02:40 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/05 12:07:41 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_special_cases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

int	ft_change_sign(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (-nb);
	}
	return (nb);
}

void	ft_print_nbr(int nb)
{
	int		i;
	char	out[12];

	i = 0;
	while (nb > 0)
	{
		out[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i--)
		write(1, &out[i], 1);
}

void	ft_putnbr(int nb)
{
	if (ft_check_special_cases(nb))
		return ;
	nb = ft_change_sign(nb);
	ft_print_nbr(nb);
}
