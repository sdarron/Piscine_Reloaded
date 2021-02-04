/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:07:01 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/10 00:23:28 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			++j;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (j < argc - i)
			{
				if (ft_strcmp(argv[j + 1], argv[j]) < 0)
				{
					c = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = c;
				}
				j++;
			}
			i++;
		}
		ft_print(argc, argv);
	}
	return (0);
}
