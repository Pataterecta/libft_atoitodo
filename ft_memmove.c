/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookyeoc <yookyeoc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:30:56 by yookyeoc          #+#    #+#             */
/*   Updated: 2025/06/18 16:50:50 by yookyeoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*ptr;
	const char		*srcsrc;

	ptr = dest;
	temp = ptr;
	srcsrc = src;
	if (dest <= src)
	{
		while (n--)
		{
			*temp++ = *srcsrc++;
		}
	}
	else if (dest > src)
	{
		temp += n;
		srcsrc += n;
		while (n--)
		{
			*(--temp) = *(--srcsrc);
		}
	}
	return (dest);
}
