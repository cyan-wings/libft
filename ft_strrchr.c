/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:22:10 by myeow             #+#    #+#             */
/*   Updated: 2024/02/19 17:55:38 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = c;
	ptr = 0;
	--s;
	while (*++s)
		if (*s == ch)
			ptr = (char *) s;
	if (!c)
		return ((char *) s);
	return (ptr);
}
