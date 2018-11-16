/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 13:04:55 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 19:18:31 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (i < n - 1)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
		d[i + 1] = s[i + 1];
		if (s[i + 1] == (unsigned char)c)
			return (dst + i + 2);
		i += 2;
	}
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
