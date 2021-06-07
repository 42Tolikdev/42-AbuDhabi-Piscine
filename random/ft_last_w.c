/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_w.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:09:56 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/03 16:19:11 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	last_w(char *str)
{
	bool	in_w;
	char	*last_w;
	
	last_w = str;
	while(*str)
	{
		if (is_space(*str) && in_w)
		{
			in_w = false;
		}
		else if (!is_space(*str) && !in_w)
		{
			in_w = true;
			last_w = str;
		}
		str++;
	}
	if (last_w == 0)
		return ;
	while(*last_w)
	{
		if (is_space(*last_w))
			break;
		write(1, last_w, 1);
			last_w++;
	}
}

int  main(int argc, char **argv)
{
	if(argc == 2)
		last_w(argv[1]);
	write(1, "\n", 1);
	return (0);
}





