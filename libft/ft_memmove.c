/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:23:09 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/09 15:54:12 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	t_byte	*dstp;
	t_byte	*srcp;

	dstp = dest;
	srcp = (t_byte *)src;
	if (src > dest)
	{
		while (n--)
			*(dstp++) = *(srcp++);
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
