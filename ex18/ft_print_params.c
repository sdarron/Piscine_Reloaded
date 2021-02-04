/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:00:58 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/08 20:14:56 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				++j;
			}
			j = 0;
			ft_putchar('\n');
			++i;
		}
	}
	return (0);
}
