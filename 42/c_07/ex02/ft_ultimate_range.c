/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:15:31 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/11 10:50:27 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;
// 	size = ft_ultimate_range(&range, 1, 10);
// 	if (size == -1)
// 	{
// 		printf("Bellek tahsisi başarısız!\n");
// 		return (1);
// 	}
// 	printf("Dizi boyutu: %d\n", size);
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n");
// 	free(range);
// 	return (0);
// }
