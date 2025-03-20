/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:06:39 by mecetink          #+#    #+#             */
/*   Updated: 2025/02/26 16:52:02 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int     main() {
        int a = 20, b = 5, div, mod;
        ft_div_mod(a, b, &div, &mod);
        printf("%d %d", div, mod);
        return 0;
}
