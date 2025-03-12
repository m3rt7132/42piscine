/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:59:11 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/12 12:00:51 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_stock_str.h"
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

#include <stdlib.h>

int	strlength(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*dupl(char *s)
{
	int		len;
	int		i;
	char	*copy;

	i = 0;
	len = strlength(s) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = strlength(av[i]);
		arr[i].str = av[i];
		arr[i].copy = dupl(av[i]);
		if (arr[i].copy == NULL)
		{
			while (--i >= 0)
				free(arr[i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
//		t_stock_str *arr;
// 	int i = 0;
	// arr = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (arr == NULL) return printf("ram null");
// 	while (arr[i].str)
// 	{
// printf("i: %d\nsize: %d\nstr: %s\ncopy: %s\n", i,
// arr[i].size, arr[i].str, arr[i].copy);
// 		i++;
// 	}
// 	i = 0;
// 	while (arr[i].str)
// 		free(arr[i++].copy);
// 	free(arr);
// return 0;
// }
