/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:28:26 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/17 00:06:53 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strtoupper(char *s)
{
	if (!s || !*s)
		return ;
	if (*s >= 'a' && *s <= 'z')
		*s -= 'a' - 'A';
	ft_strtoupper(s + 1);
}
