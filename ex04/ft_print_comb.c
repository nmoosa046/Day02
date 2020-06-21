/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:29:32 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/21 10:37:24 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);
void ft_print_var(char a,char b,char c);

void ft_print_var(char a,char b,char c){
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a!='7'){
		ft_putchar(",");
		ft_putchar('');
	}
}

void ft_print_comb(void){
	char a;
	char b;
	char c;

	a= '0';
	while(a <= '7'){
		b = a + 1;
		while ( b <= '8'){
			c = b + 1;
			while (c <= '9'){
				ft_print_var(a, b, c,);
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

