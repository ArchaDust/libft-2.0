/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 21:04:16 by aberneli     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/09 21:29:44 by aberneli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (s1);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ft_memcpy(s1 + l1, s2, l2);
	s1[l1 + l2] = '\0';
	return (s1);
}
