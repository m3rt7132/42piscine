/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:30:59 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/03 11:25:56 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];

// 	ft_strncpy(dest, src, 5);
// 	printf("%s\n", dest);
// 	return (0);
// }