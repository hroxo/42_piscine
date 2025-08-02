/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:39:45 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/21 11:23:11 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_new_word(char c)
{
	if ((c > 'a' - 1 && c < 'z' + 1)
		|| (c > 'A' - 1 && c < 'Z' + 1)
		|| (c > '0' - 1 && c < '9' + 1))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n_str;

	n_str = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'a' - 1 && str[i] < 'z' + 1)
		{
			if (n_str == 1)
				str[i] -= 32;
		}
		else if (str[i] > 'A' - 1 && str[i] < 'Z' + 1)
		{
			if (n_str == 0)
				str[i] += 32;
		}
		n_str = check_new_word(str[i]);
		i++;
	}
	return (str);
}
