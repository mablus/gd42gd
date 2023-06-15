/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluizde- <fluizde-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:12:05 by fluizde-          #+#    #+#             */
/*   Updated: 2023/06/15 17:25:27 by fluizde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

// int	main(void)
// {
// 	int	*ptra;
// 	int	*ptrb;
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 0;
// 	ptra = &a;
// 	ptrb = &b;
// 	ft_swap(ptra, ptrb);
// 	printf("%d %d\n", a, b);
// 	return (0);
// }
