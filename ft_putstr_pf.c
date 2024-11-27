/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-troc <hho-troc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:54:43 by hho-troc          #+#    #+#             */
/*   Updated: 2024/11/26 10:04:37 by hho-troc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
	{
		*counter += write(1, "(null)", 6);
		return ;
	}
	while (*str)
		ft_putchar_pf(*str++, counter);
}
