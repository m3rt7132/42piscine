/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:44:05 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/10 10:49:50 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
// #include <stdio.h>
// int main() {
// 	char *res = "test";
// 	char *dup = ft_strdup(res);
// 	printf("%s", dup);
// 	free(dup);  
// }
