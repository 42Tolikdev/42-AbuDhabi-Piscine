/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:49:20 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/05/26 21:05:23 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*dummy;

	dummy = str;
	while (*dummy != 0)
	{
		if (*dummy >= 'a' && *dummy <= 'z')
		{
			*dummy -= 32;
		}
		dummy++;
	}
	return (str);
}
