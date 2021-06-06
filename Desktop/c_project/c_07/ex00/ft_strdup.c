/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskarbe <aaskarbe@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:09:44 by aaskarbe          #+#    #+#             */
/*   Updated: 2021/06/06 10:53:47 by aaskarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;
	char	*dup_offs;

	size = ft_strlen(src);
	dup = malloc(sizeof(char) * size + 1);
	if (dup == NULL)
		return ((char *)NULL);
	dup_offs = dup;
	while (*src)
	{
		*dup_offs = *src;
		dup_offs++;
		src++;
	}
	*dup_offs = '\0';
	return (dup);
}
