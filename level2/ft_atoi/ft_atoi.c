/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:06:13 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/08 20:29:11 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str){
    int i = 0;
    int sign = 1;
    int result = 0;
	while(str[i] <= 32)
		i++;
    if(str[i] == '-' )
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] != '\0')
    {
        if(str[i] > '9' || str[i] < '0')
        {
            return (0);
        }
        result = result * 10 + str[i] - 48;
        i++;
    }
    
    return (result * sign);
}

int main()
{
    printf("%d\n", ft_atoi("	56"));
    printf("%d", atoi("	56"));
    return 0;
}