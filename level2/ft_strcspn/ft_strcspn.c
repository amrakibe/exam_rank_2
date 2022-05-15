/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:29:11 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/15 11:15:18 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;

	while(s[i])
	{
		int j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
			return(i);
			j++;
		}
		i++;
	}
	i = 0;
	while(s[i]) 
		i++;
	return(i);
}
int main()
{
	printf("%hhd\n", ft_strcspn("amine", "i"));
	printf("%hhd", strcspn("amine", "i"));
}