/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:47:41 by tmichel           #+#    #+#             */
/*   Updated: 2023/01/26 13:54:01 by tmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main()
{
	char	d[] = "uwdhwd";
	printf("%d", ft_strlen(d));
}
