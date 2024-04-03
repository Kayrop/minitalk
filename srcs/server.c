/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:06:57 by adahmani          #+#    #+#             */
/*   Updated: 2024/03/27 22:22:42 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	handle_sigusr(int signum, siginfo_t *info, void *ucontext)
{
	static int				bit_itr = 7;
	static unsigned char	c = 0;

	(void)ucontext;
	if (signum == SIGUSR2)
		c |= (1 << bit_itr);
	bit_itr--;
	if (bit_itr < 0)
	{
		ft_putchar_fd(c, STDOUT_FILENO);
		if (!c)
			ft_putchar_fd('\n', STDOUT_FILENO);
		c = 0;
		bit_itr = 7;
		if (kill(info->si_pid, SIGUSR1) == -1)
			ft_printf("Server failed to send SIGUSR1");
	}
}

void	config_signals(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handle_sigusr;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		ft_printf("Failed to change SIGUSR1's behavior");
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		ft_printf("Failed to change SIGUSR2's behavior");
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_printf("SERVER PID = %d\n\n", getpid());
	config_signals();
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
