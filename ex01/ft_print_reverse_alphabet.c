/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:10:21 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/21 10:13:23 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);
void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void){
	int rev_a;

	rev_a = 'z';
	while(rev_a >= 'a'){
		ft_putchar(rev_a);
		rev_a = rev_a - 1;
	}
	ft_putchar('\n');
}
