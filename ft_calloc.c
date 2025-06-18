/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:42:20 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 14:54:29 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, nmemb * size);
	return (new);
}

// int main(void)
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//         printf("arr[%d] = %d\n", i, arr[i]);
//     return (0);
// }