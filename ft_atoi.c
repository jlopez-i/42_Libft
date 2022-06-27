/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:18:36 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 17:18:10 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || \
			c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * n);
}
/*The atoi() function converts the initial portion of the string pointed to
by str to int representation.
int main()
{
	const char *str = "123";
	int	result;

	ft_putstr_fd((char *)str, 1);
	ft_putchar_fd('\n', 1);
	printf("str num: %d\n", ft_atoi(str));
	return(0);
}
*/
