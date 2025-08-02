/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:04:09 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/02 19:38:05 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	n;

	n = 0;
	while (charset[n])
	{
		if (c == charset[n])
			return (1);
		n++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	n;
	int	score;
	int	is_word;

	is_word = 1;
	score = 0;
	n = 0;
	while (str[n])
	{
		if (is_charset(str[n], charset))
			is_word = 1;
		else
		{
			if (is_word == 1)
				score++;
			is_word = 0;
		}
		n++;
	}
	return (score);
}

char	*ft_strdup(char *src, int size)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(size + 1);
	if (dest == 0)
		return (0);
	while (src[n] && n < size)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		n;
	int		w;
	char	**out;
	int		i;

	n = 0;
	i = 0;
	out = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!out)
		return (NULL);
	while (str[n])
	{
		while (str[n] && is_charset(str[n], charset))
			n++;
		w = 0;
		while (!is_charset(str[n + w], charset) && str[n + w])
			w++;
		if (w > 0)
		{
			out[i++] = ft_strdup(&str[n], w);
			n += w;
		}
	}
	out[i] = NULL;
	return (out);
}
/*
#include <stdio.h>
int	main()
{
	char **miau = ft_split("sda;s;s;s;s", "/;");

	for(int i = 0; i < 5; i++)
	{
		printf("%s\n\n", miau[i]);
		free(miau[i]);
	}
	free(miau);
}*/
