/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:58:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/29 20:05:02 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	n;

	c = 0;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	while ((size != 0) && (src[c] != '\0') && (c < (size - 1)))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (n);
}
