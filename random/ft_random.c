/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:47:43 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/05/27 14:14:44 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_cal(unsigned	char c, char max)
{
	c += 13;
	if (c > max)
		c -= 26;
	return (c);
}

char	ft_ran(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = ft_cal(*str, 'Z');
		else if (*str >= 'a' && *str <= 'z')
			*str = ft_cal(*str, 'z');
		write(1, str, 1);
		str++;
	}
	write(1, " ", 1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			ft_ran(argv[i]);
			i++;
		}
	write(1, "\n", 1);
}
