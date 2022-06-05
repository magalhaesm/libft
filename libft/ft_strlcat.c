/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:47:48 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/05 18:56:18 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size < srclen)
		return (srclen + size);
	dstlen = ft_strlen(dst);
	i = dstlen;
	j = 0;
	while (j < size - dstlen - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (srclen + dstlen);
}
