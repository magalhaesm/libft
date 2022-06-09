/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:23:09 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/08 23:48:15 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	t_byte	*dest_buf;
	t_byte	*src_buf;

	dest_buf = dest;
	src_buf = (t_byte *)src;
	if (src > dest)
	{
		while (n--)
			*(dest_buf++) = *(src_buf++);
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
