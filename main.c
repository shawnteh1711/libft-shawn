/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:35:56 by steh              #+#    #+#             */
/*   Updated: 2022/03/03 09:38:22 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	main(void)
{
	int			i;
	char		c;
	const char	*str;
	char 		**test;

	i = 0;
	c = 'o';
	str= "a op n";
	test = ft_split(str, c);
	// test[i] != 0
	while (test[i])
	{
		printf("[%s]\n", test[i]);
		++i;
	}
	return (0);
}
