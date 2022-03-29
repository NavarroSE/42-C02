/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:58:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/29 14:14:08 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n >= 1)
	{
		while (src[c] && c < n - 1)
		{
			dest[c] = src[c];
			c++;
		}
	}
	dest[c] = '\0';
	return (dest);
}
