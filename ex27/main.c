/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:17:20 by cbartoli          #+#    #+#             */
/*   Updated: 2017/11/27 15:22:00 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void     ft_display_file(int fd)
{
        char    buf[10000];
        int     ret;

        ret = read(fd, buf, 10000);
        buf[ret] = '\0';
        ft_putstr(buf);

}

int     main(int argc, char **argv)
{
    int     fd;

    if (argc == 1)
    {
        write(2, "File name missing.", 18);
        return (1);
    }
    else if (argc > 2)
    {
        write(2, "Too many arguments.", 19);
        return (1);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        write(2, "Open() error", 12);
        return (1);
    }
    ft_display_file(fd);
    if (close(fd) == -1)
    {
        write(2, "Close() error", 13);
        return (1);
    }
    return (0);
}
