/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:43:57 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/08 17:47:16 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size == 0)
	{
		char *temp = (char *)malloc(1);
		temp[0] = '\0';
		return (temp);
	}
	int totallen = 0;
	int sepcount = ft_strlen(sep);
	int i = 0;
	int j = 0;
	int pos = 0;
	while (i < size)
	{
		totallen += ft_strlen(strs[i]);
		i++;
	}
	totallen += sepcount * (size - 1);
	char *result = (char *)malloc(sizeof(char) * (totallen + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[pos++] = sep[j++];
		}
		i++;
	}
	result[pos] = 0;
	return (result);
}

int main()
{
	char *strs[] = {"mert", "can", "se", "lam"};
	char *res = ft_strjoin(4, strs, ", ");
	printf("%s", res);
}
