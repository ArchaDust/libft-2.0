/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 21:01:00 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 21:04:02 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len);
	res[len] = '\0';
	return (res);
}
