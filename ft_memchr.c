/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:47:05 by myeow             #+#    #+#             */
/*   Updated: 2024/02/22 13:45:20 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*ptr;

	ch = c;
	ptr = (const unsigned char *) s;
	if (!n)
		return (0);
	while (--n)
		if (*ptr++ == ch)
			return ((void *)--ptr);
	if (*ptr == ch)
		return ((void *) ptr);
	return (0);
}
