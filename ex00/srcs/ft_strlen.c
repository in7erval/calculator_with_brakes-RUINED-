/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:02:38 by htrent            #+#    #+#             */
/*   Updated: 2019/08/18 21:03:54 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_list.h"

int	ft_strlen(char *str)
{
	char	*buf;
	int		n;

	n = 0;
	buf = str;
	while (*buf)
	{
		n++;
		buf++;
	}
	return (n);
}
