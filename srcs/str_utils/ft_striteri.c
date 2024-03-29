/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:46:24 by myeow             #+#    #+#             */
/*   Updated: 2024/03/28 19:31:54 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
