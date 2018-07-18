/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:46:55 by equillie          #+#    #+#             */
/*   Updated: 2018/07/18 19:26:16 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	(void)argc;
//	Ex00
//	printf("%s", ft_strdup(argv[1]));
	for (unsigned long i = 0; i <= sizeof(ft_range(atoi(argv[1]), atoi(argv[2]))); i++)
		printf("%d", ft_range(atoi(argv[1]), atoi(argv[2]))[i]);
	return (0);
}
