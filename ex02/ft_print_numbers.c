/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:19:49 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/21 10:22:38 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
void	ft_print_numbers(void);

int	ft_putchar(char c){
	write(1, &c, 1);
	return(0);
}

void	ft_print_numbers(void){
	int num;

	num = '0';
	while(num <= '9'){
		ft_putchar(num);
		num = num + 1;
	}
	ft_putchar('\n');
}
