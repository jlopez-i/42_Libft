/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:04:58 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 17:06:41 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counterword(char *s, char c)
{
	int	i;
	int	ctr;

	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			ctr++;
		i++;
	}
	return (ctr);
}

static char	**ft_free(char **str, int num_word)
{
	while (num_word > 0)
	{
		num_word--;
		free(str[num_word]);
	}
	free(str);
	return (NULL);
}

static char	**ft_parse(char *s, char **str, char c)
{
	int	i;
	int	start;
	int	end;
	int	num_word;

	i = 0;
	num_word = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			start = i;
		if (i > 0 && s[i - 1] == c && s[i] != c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			end = i;
			str[num_word] = ft_substr(s, start, end - start + 1);
			if (!str[num_word])
				return (ft_free(str, num_word));
			num_word++;
		}
		i++;
	}
	str[num_word] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		ctr;
	char	**str;

	ctr = ft_counterword((char *)s, c);
	str = (char **)malloc((ctr + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_parse((char *)s, str, c);
	return (str);
}
/*
int	main(void)
{
	int	i;
	char *s = "**HOLA*COMO*ESTAS**";
	printf("String antes del split:    \n");
	printf("%s\n", s);
	char **result = ft_split(s, '*');
	printf("String despues del split:  \n");
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return(0);
}
PARAMETROS
#1. La string a separar.
#2. El caracter delimitador.
RETURN
El array de strings resultante. NULL si la reserva falla.
FUNCIONES PERMITIDAS
malloc, free
DESCRIPCION
Reserva con malloc(3) y devuelve un array de strings obtenido al 
separar ’s’ con el caracter ’c’ como delimitador. 
El array debe terminar en NULL.
*/
