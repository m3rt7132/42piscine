/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:43:57 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/11 10:54:41 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	cat(int size, char **strs, char *temp, char *sep)
{
	int	i;
	int	j;
	int	pos;

	pos = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			temp[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				temp[pos++] = sep[j++];
		}
	}
	temp[pos] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		totallen;
	int		i;

	if (size == 0)
	{		
		temp = (char *) malloc(1);
		temp[0] = 0;
		return (temp);
	}
	totallen = 0;
	i = 0;
	while (i < size)
		totallen += ft_strlen(strs[i++]);
	totallen += ft_strlen(sep) * (size - 1);
	temp = (char *) malloc(sizeof(char) * (totallen + 1));
	if (temp == NULL)
		return (NULL);
	cat(size, strs, temp, sep);
	return (temp);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *strs[] = {"mert", "can", "se", "lam"};
// 	char *res = ft_strjoin(4, strs, ",");
// 	printf("%s", res);
// 	free(res);
// } 
