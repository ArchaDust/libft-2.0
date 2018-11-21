/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/19 15:39:58 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 16:19:41 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(const char *s1, const char *s2)
{
	while (1)
	{
		if (s1[0] != s2[0] && s2[0] != '\0')
			return (0);
		if (s2[0] == '\0')
			return (1);
		if (s1[1] != s2[1] && s2[1] != '\0')
			return (0);
		if (s2[1] == '\0')
			return (1);
		if (s1[2] != s2[2] && s2[2] != '\0')
			return (0);
		if (s2[2] == '\0')
			return (1);
		if (s1[3] != s2[3] && s2[3] != '\0')
			return (0);
		if (s2[3] == '\0')
			return (1);
		s1 += 4;
		s2 += 4;
	}
}

char		*ft_strnstr(const char *hay, const char *dart, size_t n)
{
	if (!dart)
		return ((char *)hay);
	if (!hay || *dart == '\0' || n == 0)
		return (NULL);
	while (n > 0)
	{
		if (ft_contains(&hay[0], dart))
			return ((char *)&hay[0]);
		if (ft_contains(&hay[1], dart))
			return ((char *)&hay[1]);
		if (ft_contains(&hay[2], dart))
			return ((char *)&hay[2]);
		if (ft_contains(&hay[3], dart))
			return ((char *)&hay[3]);
		if (ft_contains(&hay[4], dart))
			return ((char *)&hay[4]);
		if (ft_contains(&hay[5], dart))
			return ((char *)&hay[5]);
		if (ft_contains(&hay[6], dart))
			return ((char *)&hay[6]);
		if (ft_contains(&hay[7], dart))
			return ((char *)&hay[7]);
		hay += 8;
		n -= 8;
	}
}
