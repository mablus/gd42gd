/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluizde- <fluizde-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:12:19 by fluizde-          #+#    #+#             */
/*   Updated: 2023/06/15 17:23:58 by fluizde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;

// 	a = 10;
// 	b = 2;
// 	div = &a;
// 	mod = &b;
// 	ft_ultimate_div_mod(div, mod);
// 	printf("%d %d\n", a, b);
// 	return (0);
// }
