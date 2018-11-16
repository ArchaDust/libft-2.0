/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 19:18:55 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 19:33:24 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	if (dst == src || len == 0)
		return (dst);
	else if (dst < src)
		return (ft_memcpy(dst, src, len));
	i = len - 1;
	while (i >= 8)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		*((unsigned char *)(dst + i - 1)) = *((unsigned char *)(src + i - 1));
		*((unsigned char *)(dst + i - 2)) = *((unsigned char *)(src + i - 2));
		*((unsigned char *)(dst + i - 3)) = *((unsigned char *)(src + i - 3));
		*((unsigned char *)(dst + i - 4)) = *((unsigned char *)(src + i - 4));
		*((unsigned char *)(dst + i - 5)) = *((unsigned char *)(src + i - 5));
		*((unsigned char *)(dst + i - 6)) = *((unsigned char *)(src + i - 6));
		*((unsigned char *)(dst + i - 7)) = *((unsigned char *)(src + i - 7));
		i -= 8;
	}
	while (i >= 0)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i--;
	}
	return (dst);
}
