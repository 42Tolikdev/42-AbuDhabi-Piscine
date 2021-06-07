/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_w.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:02:09 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/03 16:18:27 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_w(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac ==2)
		first_w(av[1]);
	else
		ft_putchar('\n');
	return (0);
}

