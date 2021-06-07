/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:41:57 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/07 15:26:08 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * diff);
	if (*range)
	{
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (diff);
	}
	else
		return (-1);
}
