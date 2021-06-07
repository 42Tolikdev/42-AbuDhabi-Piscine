/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:44:22 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/05/25 12:54:38 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
//	int	last;
	int swp;

	first = 0;
	while (first <= (size / 2))
	{
		swp = tab[first];
		tab[first] = tab[size - 1 - first];
		tab[size - 1 - first] = swp;
		first++;
	//	last--;
	}
}
