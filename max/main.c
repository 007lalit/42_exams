/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:16:23 by exam              #+#    #+#             */
/*   Updated: 2016/12/18 01:48:35 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int*tab, unsigned int len);

int		main(void)
{
	int tab[10] = {-1, -50, -23, -15, -12, 66, -153, -123, -11, 0};
	int	res;

	res = max(tab, 10);
	printf("%i Expected: %i, Result: %i\n", res == 66, 66, max(tab, 10));
	return (0);
}
