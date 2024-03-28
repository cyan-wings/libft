/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:00:33 by myeow             #+#    #+#             */
/*   Updated: 2024/03/28 19:30:33 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s)
		if (*s++ == ch)
			return ((char *)--s);
	if (!c)
		return ((char *) s);
	return (0);
}