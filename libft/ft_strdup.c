/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 09:51:04 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/11 14:54:26 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = ft_calloc(len, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
