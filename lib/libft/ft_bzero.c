/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouellet <aouellet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:33:48 by aouellet          #+#    #+#             */
/*   Updated: 2023/12/11 17:49:45 by aouellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
   
	i = 0;
	if (!s)
		return ;
	while (n--)
	{
		(*(unsigned char *)(s + i)) = '\0';
		i++;
	}
}
