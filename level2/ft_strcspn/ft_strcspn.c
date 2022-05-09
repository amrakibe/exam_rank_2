/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:29:11 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/09 16:52:21 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
			return i;
			j++;
		}
		i++;
	}
	while(s[i])
	{
		i++;
	}
	return(i);
}
int main()
{
	printf("%ld\n", ft_strcspn("amrakibe", "k"));
	printf("%ld", strcspn("amrakibe", "k"));
	
}