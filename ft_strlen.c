/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 11:40:22 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 11:57:55 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (1)
	{
		if (s[len] == '\0')
			return (len);
		if (s[len + 1] == '\0')
			return (len + 1);
		if (s[len + 2] == '\0')
			return (len + 2);
		if (s[len + 3] == '\0')
			return (len + 3);
		if (s[len + 4] == '\0')
			return (len + 4);
		if (s[len + 5] == '\0')
			return (len + 5);
		if (s[len + 6] == '\0')
			return (len + 6);
		if (s[len + 7] == '\0')
			return (len + 7);
		len += 8;
	}
}
