/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:36:47 by kayrop            #+#    #+#             */
/*   Updated: 2024/04/03 14:52:27 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define BUFFER_SIZE 1024

# include "../libftprintf/includes/ft_printf.h"
# include "../libftprintf/includes/libft.h"
# include <signal.h>
# include <stddef.h>
# include <errno.h> 

void	handle_sigusr(int signum, siginfo_t *info, void *ucontext);
void	bit_send(int pid, char *str, size_t len);
void	config_signals(void);
void	send_msg(int sv_pid, char *msg);
void	sig_handler(int signum);
void	config_signals(void);
void	flush_buffer(char *buffer, int *buffer_index);
int		args_check(int argc, char **argv);
int		main(int argc, char **argv);

#endif