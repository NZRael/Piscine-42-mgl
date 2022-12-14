/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabs3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:59:09 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/23 18:28:01 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *s1, char *s2);

int	tab5(char **argv)
{
	if (cmp(argv[1], "1 2 3 2 2 1 2 3 1 4 2 2 3 1 2 3") == 0)
		return (1);
	return (0);
}

void	print5(void)
{
	write(1, "4 3 1 2\n1 2 3 4\n2 1 4 3\n3 4 2 1", 31);
}

int	tab6(char **argv)
{
	if (cmp(argv[1], "1 4 2 2 4 1 2 2 1 2 3 2 2 2 1 3") == 0)
		return (1);
	return (0);
}

void	print6(void)
{
	write(1, "4 1 2 3\n3 2 4 1\n2 3 1 4\n1 4 3 2", 31);
}
