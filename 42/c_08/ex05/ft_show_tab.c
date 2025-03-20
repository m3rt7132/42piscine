/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:16:52 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/12 12:00:48 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_stock_str.h"
#include <unistd.h>
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
