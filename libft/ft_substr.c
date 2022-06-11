/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:46:19 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/11 18:26:42 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc((++len) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}
