/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 12:36:50 by greyrol           #+#    #+#             */
/*   Updated: 2014/01/02 16:31:19 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_printf.h>
#include <stdlib.h>
#include "ft_select.h"

int main(int argc, char *argv[], char **env)
{
	t_term	*term;

	term = (t_term *)malloc(sizeof(t_term));
	ft_init_terminal_data(&term->term_buffer);
	ft_terminal_raw_mode();
	if (argc > 1)
		ft_terminal_parse_args(argv, env);
	ft_terminal_run();
	free(term->term_buffer);
	return (0);
}
