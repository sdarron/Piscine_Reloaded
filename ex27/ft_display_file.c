/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:54:23 by sdarron           #+#    #+#             */
/*   Updated: 2019/09/13 15:55:09 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int			main(int argc, char *argv[])
{
	int		g;
	int		p;
	char	ob[4096];

	if (argc == 2)
	{
		g = open(argv[1], O_RDONLY);
		while ((p = read(g, ob, 4096)))
		{
			write(1, ob, p);
			ob[p] = '\0';
		}
		close(p);
	}
	else if (argc < 2)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
