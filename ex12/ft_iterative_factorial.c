/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:58:01 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 20:07:51 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int rez;
	int i;

	rez = 1;
	i = 1;
	if ((nb > 12) || (nb < 0))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
	{
		while (nb > 0)
		{
			rez = rez * nb;
			nb--;
		}
		return (rez);
	}
}
