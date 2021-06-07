/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:56:34 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/07 15:23:00 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*num;
	int	diff;
	int	i;
	int *arr_num;

	i = 0;
	if (min >= max)
		return (0);
	diff = max - min;
	num = malloc(sizeof(int) * diff);
	if (num == NULL)
		return ((int *)NULL);
	arr_num = num;
	while (diff > i)
		*num++ = min + i++;
	return (arr_num);
}
