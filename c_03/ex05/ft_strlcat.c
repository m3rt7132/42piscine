/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:55:17 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/04 08:55:17 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlength;
	unsigned int	srclength;
	unsigned int	copylength;

	i = 0;
	destlength = ft_strlen(dest);
	srclength = ft_strlen(src);
	if (destlength >= size)
		return (size + srclength);
	copylength = size - destlength - 1;
	while (src[i] && i < copylength)
	{
		dest[destlength + i] = src[i];
		i++;
	}
	dest[destlength + i] = '\0';
	return (destlength + srclength);
}
