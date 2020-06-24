/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:13:42 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/24 10:30:57 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

    a = -1;
	while(++a <=98)
	{
		b = a;
		while(++b <= 99)
		{
			ft_putchar((char)(a/10)+'0');
			ft_putchar((char)(a%10)+'0');
			ft_putchar(' ');
			ft_putchar((char)(b/10)+'0');
			ft_putchar((char)(b%10)+'0');

			if((a!=98))
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
		}
	}	
}

