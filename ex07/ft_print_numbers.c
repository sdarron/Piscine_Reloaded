/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:16:52 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 20:02:58 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	char a;
	char b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		ft_putchar(a);
		a++;
	}
}
