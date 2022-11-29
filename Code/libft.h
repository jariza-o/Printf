/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_print.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:31:59 by jariza-o          #+#    #+#             */
/*   Updated: 2022/11/21 18:26:28 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include   <stdarg.h>
# include	<stdlib.h>
# include	<unistd.h>

void	ft_printchar(char c, int *count);
void	ft_printstr(char *s, int *count);
void	ft_printnbr(int n, int *count);
void	ft_printunsig(unsigned int n, int *count);
void	ft_hex(int n, int *count, char x);

#endif
