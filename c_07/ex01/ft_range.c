/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:44:03 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/10 09:49:28 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
// int	main()
// {
//     int *range;
//     int size;
//     int i;

//     size = ft_range(1, 10);
//     if (size == -1)
//     {
//         printf("Bellek tahsisi başarısız!\n");
//         return (1);
//     }

//     printf("Dizi boyutu: %d\n", size);
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", range[i]);
//     }
//     printf("\n");

//     free(range);
//     return (0);
// }
