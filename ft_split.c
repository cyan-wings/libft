/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:18:06 by myeow             #+#    #+#             */
/*   Updated: 2024/02/22 13:47:01 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	n;

	n = 0;
	if (*s && *s != c)
		++n;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			++n;
		++s;
	}
	return (n);
}

static char	*ft_strdupsplit(char const *s, unsigned int start, unsigned int end)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(end - start + 2);
	if (!str)
		return (0);
	i = 0;
	while (start <= end)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	start;
	unsigned int	i;
	size_t			a;

	if (!s)
		return (0);
	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!array)
		return (0);
	i = 0;
	while (s[i] == c && c)
		++i;
	start = i--;
	a = -1;
	while (s[++i])
	{
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			array[++a] = ft_strdupsplit(s, start, i);
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			start = i + 1;
	}
	array[++a] = 0;
	return (array);
}
