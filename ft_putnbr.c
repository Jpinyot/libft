/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:47:09 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/17 02:04:21 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int i;
	int nb[10];

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n == -2147483648)
		ft_putstr("2147483648");
	if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		nb[i] = n % 10;
		n = n / 10;
		i++;
	}
	while (i--)
		ft_putchar(nb[i] + 48);
}
