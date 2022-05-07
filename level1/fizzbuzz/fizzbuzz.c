/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:36:55 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/07 15:10:45 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void fizzbuzz(int number)
{
	char buf[10] = "0123456789";
	if(number > 9)
	fizzbuzz(number / 10);
	write(1,&buf[number % 10], 1);
}
int main()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
		write(1, "fizz", 4);
		else if(i % 5 == 0)
		write(1,"buzz",4);
		else
			fizzbuzz(i);
		i++;
		write(1, "\n", 1);
	}
}