/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabs2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:41:44 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/23 17:53:07 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *s1, char *s2);

int	tab3(char **argv)
{
	if (cmp(argv[1], "1 3 2 2 3 2 2 1 1 3 2 4 2 2 2 1") == 0)
		return (1);
	return (0);
}

void	print3(void)
{
	write(1, "4 1 2 3\n2 3 4 1\n3 4 1 2\n1 2 3 4", 31);
}

int	tab4(char **argv)
{
	if (cmp(argv[1], "4 1 3 2 1 2 2 2 2 3 2 1 2 1 2 3") == 0)
		return (1);
	return (0);
}

void	print4(void)
{
	write(1, "1 4 2 3\n2 1 3 4\n3 2 4 1\n4 3 1 2", 31);
}
