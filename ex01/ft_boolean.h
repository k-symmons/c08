/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksymmons <ksymmons@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:31:50 by ksymmons          #+#    #+#             */
/*   Updated: 2026/08/13 17:22:08 by ksymmons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) ((nbr) % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef int	t_bool;

// int	EVEN(int n)
// {
// 	if (n % 2 == 0)
// 		return (TRUE);
// 	else
// 		return (FALSE);
// }

#endif
