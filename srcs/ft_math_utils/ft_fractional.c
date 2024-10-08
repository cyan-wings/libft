/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractional.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:03:21 by myeow             #+#    #+#             */
/*   Updated: 2024/07/30 23:04:35 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_floor(double d);

double	ft_fractional(double d)
{
	return (d - ft_floor(d));
}
