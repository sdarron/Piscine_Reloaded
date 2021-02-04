/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:51:53 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 20:21:31 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		a = (int *)malloc(sizeof(*a) * (max - min));
		if (a == NULL)
			return (NULL);
		else
		{
			while (i < (max - min))
			{
				a[i] = i + min;
				i++;
			}
		}
	}
	return (a);
}
