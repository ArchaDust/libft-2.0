/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/19 15:15:02 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 15:39:10 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*strrchr(const char *s, int c)
{
	char	*last;

	if (!s)
		return (NULL);
	last = NULL;
	while (1)
	{
		if (s[0] == (char)c)
			last = (char *)&s[0];
		if (s[0] == '\0')
			return (last);
		if (s[1] == (char)c)
			last = (char *)&s[1];
		if (s[1] == '\0')
			return (last);
		if (s[2] == (char)c)
			last = (char *)&s[2];
		if (s[2] == '\0')
			return (last);
		if (s[3] == (char)c)
			last = (char *)&s[3];
		if (s[3] == '\0')
			return (last);
		s += 4;
	}
}
