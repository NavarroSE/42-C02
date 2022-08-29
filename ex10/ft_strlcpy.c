/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:58:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/03 19:32:43 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
