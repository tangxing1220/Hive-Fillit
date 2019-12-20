/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:08:51 by xtang             #+#    #+#             */
/*   Updated: 2019/11/29 19:20:05 by elindber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * len);
	if (dst == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		dst[len] = s1[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}
