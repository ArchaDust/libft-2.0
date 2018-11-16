/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 19:34:03 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 19:39:15 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	int				i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n - 3)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		if (src[i + 1] == (unsigned char)c)
			return (src + i + 1);
		if (src[i + 2] == (unsigned char)c)
			return (src + i + 2);
		if (src[i + 3] == (unsigned char)c)
			return (src + i + 3);
		i += 4;
	}
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
