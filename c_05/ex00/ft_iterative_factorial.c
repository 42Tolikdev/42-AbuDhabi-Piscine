/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:49:53 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/04 16:50:16 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
