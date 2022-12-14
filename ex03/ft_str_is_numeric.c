/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:59:10 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/29 14:13:20 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	c;

	n = 1;
	c = 0;
	if (str[0] == '\0')
		n = 1;
	else
	{
		while (str[c] != '\0' && n != 0)
		{
			if ((str[c] >= '0' && str[c] <= '9'))
				n = 1;
			else
				n = 0;
			c++;
		}
	}
	return (n);
}
