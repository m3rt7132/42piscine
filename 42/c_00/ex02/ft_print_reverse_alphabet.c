/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink<mecetink@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:14:05 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/20 14:15:05 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char lc;

	lc = 123;
	while (lc-- >= 98)
		write(1, &lc, 1);
}
// int main(void)
// {
// 	ft_print_reverse_alphabet();
// }
