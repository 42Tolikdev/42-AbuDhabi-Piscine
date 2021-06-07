/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:05:39 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/05/31 12:24:57 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src && nb)
	{
		*d = *src;
		d++;
		src++;
		nb--;
	}
	*d = '\0';
	return (dest);
}
