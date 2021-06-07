/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:43:30 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/05 14:23:13 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	int		root;

	root = 1;
	while (root * root < n && root < 46341)
		root += 1;
	if (root * root == n)
		return (root);
	return (0);
}