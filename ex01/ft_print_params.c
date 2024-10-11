/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:12:11 by jegoh             #+#    #+#             */
/*   Updated: 2023/07/30 16:21:43 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	arg_len;

	i = 1;
	while (i < argc)
	{
		arg_len = 0;
		while (argv[i][arg_len] != '\0')
			arg_len++;
		write(1, argv[i], arg_len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
