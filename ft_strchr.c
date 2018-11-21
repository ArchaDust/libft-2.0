/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/19 15:03:51 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 15:17:29 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (1)
	{
		if (s[0] == (char)c || s[0] == '\0')
			return (s[0] == '\0' ? NULL : (char *)&s[0]);
		if (s[1] == (char)c || s[1] == '\0')
			return (s[1] == '\0' ? NULL : (char *)&s[1]);
		if (s[2] == (char)c || s[2] == '\0')
			return (s[2] == '\0' ? NULL : (char *)&s[2]);
		if (s[3] == (char)c || s[3] == '\0')
			return (s[3] == '\0' ? NULL : (char *)&s[3]);
		if (s[4] == (char)c || s[4] == '\0')
			return (s[4] == '\0' ? NULL : (char *)&s[4]);
		if (s[5] == (char)c || s[5] == '\0')
			return (s[5] == '\0' ? NULL : (char *)&s[5]);
		if (s[6] == (char)c || s[6] == '\0')
			return (s[6] == '\0' ? NULL : (char *)&s[6]);
		if (s[7] == (char)c || s[7] == '\0')
			return (s[7] == '\0' ? NULL : (char *)&s[7]);
		s += 8;
	}
}
