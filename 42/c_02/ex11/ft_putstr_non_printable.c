/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:38:37 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/03 08:38:37 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert16(unsigned char deci)
{
	char	*hexbase;
	char	out[2];

	hexbase = "0123456789abcdef";
	out[0] = hexbase[deci / 16];
	out[1] = hexbase[deci % 16];
	write(1, out, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			convert16((unsigned char)str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
