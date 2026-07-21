/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:17:35 by bsurilla          #+#    #+#             */
/*   Updated: 2026/07/21 21:20:15 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* Parsing */
void		parse_input(int argc, char **argv);
int			is_valid_number(char *input);
int			is_inrange(long long n);
void		print_err(void);
long long	ft_atoll(const char *nptr);

/* Stack functions */

/* Operations */

/* Sorting */

#endif