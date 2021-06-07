/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:30:34 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/05 16:42:57 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			ft_putstr(av[i++]);
			write(1, "\n", 1);
		}
	}
}
