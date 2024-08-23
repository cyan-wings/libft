/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quatset_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:46:19 by myeow             #+#    #+#             */
/*   Updated: 2024/08/10 00:04:38 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_utils.h"

void	ft_quatset_id(t_quat *out)
{
	t_vec3	v;

	if (!out)
		return ;
	v = (t_vec3){0, 0, 0};
	ft_quatset(1, v, out);
}
