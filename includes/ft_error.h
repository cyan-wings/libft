/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:46:02 by myeow             #+#    #+#             */
/*   Updated: 2024/03/30 15:08:12 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# include "libft.h"

typedef enum s_error
{
	OK = 0,
	MALLOC_ERROR = -1337,
	NULL_ERROR = -10,
	SEG_FAULT = -42,
	UNDEFINED = -50,
	PARSE_ERROR = -100,
}	t_error;

void	ft_error(int err);

#endif
