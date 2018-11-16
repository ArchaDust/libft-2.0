/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 11:58:23 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 13:03:18 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	tmp[8];
	unsigned char	*bstr;
	int				i;

	if (!b)
		return (NULL);
	bstr = (unsigned char *)b;
	i = 0;
	while (i < 8)
		tmp[i++] = (unsigned char)c;
	i = 0;
	while (i < len - 7)
	{
		*(bstr + i) = (unsigned long int)*tmp;
		i += 8;
	}
	while (i < len)
		bstr[i++] = c;
	return (b);
}
