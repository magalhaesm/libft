/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:52:46 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/06/09 17:37:34 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	if (*(nptr++) == '-' )
		sign *= (-1);
	while (ft_isdigit(*nptr))
		total = *(nptr++) - '0' + (total * 10);
	return (total * sign);
}
