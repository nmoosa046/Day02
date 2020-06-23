/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:29:21 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/23 14:59:38 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void	ft_putnbr(int nb)
{
	char c;
	if(nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	
}
int main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	return 0;
}
