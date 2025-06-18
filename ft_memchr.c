/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:34:58 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 15:03:08 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n - 1)
	{
		if (temp[i] == (unsigned char)c)
			return (&temp[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const void *s = "abcdefg";
// 	int c = 'c';
// 	char *copy;
// 	copy = ft_memchr(s, c, 5);
// 	printf("%s\n", copy);
// 	return (0);
// }