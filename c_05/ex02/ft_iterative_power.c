/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:17:42 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/01 17:56:05 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 0)
		pow = pow * nb;
	return (pow);
}
