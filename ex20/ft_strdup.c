/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:27:44 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 21:59:53 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*a;

	i = 0;
	while (src[i] != '\0')
		i++;
	a = (char *)malloc(sizeof(*a) * (i + 1));
	if (a == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			a[i] = src[i];
			i++;
		}
		a[i] = '\0';
	}
	return (a);
}
