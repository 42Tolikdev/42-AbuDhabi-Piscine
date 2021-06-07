/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:52:10 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/05/31 13:04:11 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (str);
		str++;
	}
	return (0);
}
