/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecetink <mecetink@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:36:49 by mecetink          #+#    #+#             */
/*   Updated: 2025/03/03 11:26:33 by mecetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char n, char c)
{
	if (c == 'l' && ('a' <= n && n <= 'z')) // low
		return (1);
	else if (c == 'u' && ('A' <= n && n <= 'Z')) // uppercase
		return (1);
	else if (c == 'n' && ('0' <= n && n <= '9')) //numeric
		return (1);
	else if (c == 'a' && (('a' <= n && n <= 'z') || ('A' <= n && n <= 'Z') // allphanumeric
			|| ('0' <= n && n <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	firstword;

	i = 0;
	firstword = 1;
	while (str[i])
	{
		if (is_alphanumeric(str[i], 'l') && firstword)
		{
			str[i] -= 32;
		}
		else if (is_alphanumeric(str[i], 'u') && !firstword)
		{
			str[i] += 32;
		}
		if (is_alphanumeric(str[i], 'a'))
			firstword = 0;
		else
			firstword = 1;
		i++;
	}
	return (str);
}
