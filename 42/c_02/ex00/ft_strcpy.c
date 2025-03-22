/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:01:30 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/03 11:25:48 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];

// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
