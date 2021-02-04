/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:05:40 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 20:09:18 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int rez;

	rez = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb > 1)
		rez = nb * ft_recursive_factorial(nb - 1);
	return (rez);
}
