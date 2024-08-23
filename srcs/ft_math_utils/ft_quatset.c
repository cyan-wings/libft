/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quatset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:45:45 by myeow             #+#    #+#             */
/*   Updated: 2024/08/09 21:57:43 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math_utils.h"

void	ft_quatset(double w, t_vec3 v, t_quat *out)
{
	if (!out)
		return ;
	out->w = w;
	out->v = v;
}
