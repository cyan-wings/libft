/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:03:02 by myeow             #+#    #+#             */
/*   Updated: 2024/03/29 20:50:02 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"
#include "../../includes/libft.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_putnbr_fd(*((int *) lst->content), 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
}
