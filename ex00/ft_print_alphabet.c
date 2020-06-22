/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:05:41 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/21 10:07:44 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);
void	ft_print_alphabet(void);

int	ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}

void	ft_print_alphabet(void){
	int a;

	a = 'a';
	while (a <= 'z'){
		ft_putchar(a);
		a = a + 1;
	}
	ft_putchar('\n');
}
