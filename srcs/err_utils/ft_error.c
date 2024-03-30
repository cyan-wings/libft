/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:51:00 by myeow             #+#    #+#             */
/*   Updated: 2024/03/30 15:09:04 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_error.h"

void	ft_error(int err)
{
	if (!err)
		return ;
	if (err == -1337)
		ft_putstr_fd("MALLOC ERROR\n", 1);
	else if (err == -10)
		ft_putstr_fd("NULL ERROR\n", 1);
	else if (err == -42)
		ft_putstr_fd("SEG_FAULT\n", 1);
	else if (err == -50)
		ft_putstr_fd("UNDEFINED\n", 1);
	else if (err == -100)
		ft_putstr_fd("PARSE ERROR\n", 1);
	else
		ft_putstr_fd("ERROR\n", 1);
	return ;
}
