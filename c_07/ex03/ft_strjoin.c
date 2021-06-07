/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:53:21 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/07 18:50:00 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int		ft_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src)
		*(d++) = *(src++);
	*d = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		return (str);
	}
	str = malloc(sizeof(char) * (ft_len(size, strs, sep) + 1));
	if (str)
	{
		while (i < size)
		{
			ft_strcat(str, strs[i]);
			if (i < size - 1)
				ft_strcat(str, sep);
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
