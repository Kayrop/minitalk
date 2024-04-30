/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:45:20 by kayrop            #+#    #+#             */
/*   Updated: 2024/04/30 18:17:36 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

volatile sig_atomic_t	g_ack_received = 0;

int	args_check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		write(STDERR_FILENO, "Invalid number of arguments\n", 28);
		return (0);
	}
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			write(STDERR_FILENO, "Invalid PID\n", 12);
			return (0);
		}
		i++;
	}
	if (*argv[2] == 0)
	{
		write(STDERR_FILENO, "Invalid message (empty)\n", 24);
		return (0);
	}
	else
		return (1);
}

void	send_msg(int sv_pid, char *msg)
{
	unsigned char	c;
	int				nbr_bits;

	while (*msg)
	{
		c = *msg;
		nbr_bits = 8;
		g_ack_received = 0;
		while (nbr_bits--)
		{
			if (c & 0b10000000)
				kill(sv_pid, SIGUSR2);
			else
				kill(sv_pid, SIGUSR1);
			usleep(200);
			c <<= 1;
		}
		while (!g_ack_received)
			pause();
		msg++;
	}
}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		g_ack_received = 1;
		ft_printf("Ack!\n");
	}
}

int	config_signals(void)
{
	struct sigaction	new_sig;

	new_sig.sa_handler = sig_handler;
	new_sig.sa_flags = 0;
	sigemptyset(&new_sig.sa_mask);
	if (sigaction(SIGUSR1, &new_sig, NULL) == -1)
	{
		ft_printf("Failed to change SIGUSR1's behavior");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	int	err_config;

	ft_printf("CLIENT PID = %d\n\n", getpid());
	if (!args_check(argc, argv))
		return (EXIT_FAILURE);
	err_config = config_signals();
	if (err_config == EXIT_FAILURE)
		return (EXIT_FAILURE);
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (EXIT_SUCCESS);
}
