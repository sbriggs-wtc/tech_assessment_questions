/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbriggs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:43:23 by sbriggs           #+#    #+#             */
/*   Updated: 2018/08/07 17:29:45 by sbriggs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char	tab[4096] = {0};
	char	*ptr;
	int		loop;
	char	*s;
	
	if (argc > 1)
	{
		s = argv[1];
		ptr = tab;
		while (*s)
		{
			if (*s == '+')
				++(*ptr);
			else if (*s == '-')
				--(*ptr);
			else if (*s == '>')
				ptr++;
			else if (*s == '<')
				ptr--;
			else if (*s == '.')
				write(1, ptr, 1);
			else if (*s == '[' && *ptr == 0)
			{
				loop = 1;
				while (loop != 0)
				{
					s++;
					if (*s == '[')
						loop++;
					if (*s == ']')
						loop--;
				}
			}
			else if (*s == ']' && *ptr != 0)
			{
				loop = 1;
				while (loop != 0)
				{
					s--;
					if (*s == ']')
						loop++;
					if (*s == '[')
						loop--;
				}
			}
			s++;
		}
	}
	else 
	{
		write(1, "\n", 1);
	}
	return (0);
}
