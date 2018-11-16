/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 13:04:55 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 13:10:51 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n - 7)
	{
		d[i] = s[i];
		d[i + 1] = s[i + 1];
		d[i + 2] = s[i + 2];
		d[i + 3] = s[i + 3];
		d[i + 4] = s[i + 4];
		d[i + 5] = s[i + 5];
		d[i + 6] = s[i + 6];
		d[i + 7] = s[i + 7];
		i += 8;
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
