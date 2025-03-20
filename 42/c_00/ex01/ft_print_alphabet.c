/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink<mecetink@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:12:21 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/20 14:13:22 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char character;

	character = 97;
	while (character++ <= 122)
		write(1, &character, 1);
}
int main(void)
{
	ft_print_alphabet();
}