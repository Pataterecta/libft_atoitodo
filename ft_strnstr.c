/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:28:22 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 15:03:49 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i < len && big[i] && little[j])
		{
			if (big[i] != little[j])
				break ;
			else if (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (j == ft_strlen(little))
				return ((char *)(&big[i - j]));
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char *big = "abcdefg";
// 	const char *little = "ef";
// 	size_t len = 6;
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	return (0);
// }