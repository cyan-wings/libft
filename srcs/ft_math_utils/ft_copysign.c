/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:22:27 by myeow             #+#    #+#             */
/*   Updated: 2024/08/12 15:24:49 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_abs(double d);

double	ft_copysign(double x, double y)
{
	if (y < 0)
		return (-ft_abs(x));
	return (ft_abs(x));
}
