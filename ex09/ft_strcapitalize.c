/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:49:50 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/03 21:47:12 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	ft_strupcase(str);
	c = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[c] = str[0] - 32;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			if (str[c] < 'a' || str[c] > 'z')
			{
				if (str[c] < 'A' || str[c] > 'Z')
				{
					if (str[c + 1] >= 'a' && str[c + 1] <= 'z')
						str[c + 1] = str[c + 1] - 32;
				}
			}
		}
		c++;
	}
	return (str);
}
