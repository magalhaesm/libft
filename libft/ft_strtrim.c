/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:21:17 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/12 16:51:27 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	size_t	len;

	len = ft_strlen(s1);
	start = (char *)s1;
	end = (char *)s1 + len;
	while (ft_strchr(set, *start))
		start++;
	while (ft_strchr(set, *end))
		end--;
	len = end - start + 2;
	trimmed = malloc(len);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, start, len);
	return (trimmed);
}
