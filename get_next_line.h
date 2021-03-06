/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 22:13:20 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/01/28 06:54:16 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
# define READ 1
# define END 0
# define ERROR -1

typedef struct		s_list
{
	int				fd;
	char			*overflow;
	struct s_list	*next;
}					t_list;

int	get_next_line(int const fd, char **line);
void	ft_check_fd(t_list **list, t_list **overflow, int fd);
int	ft_store_line(char **overflow, char **line);
int	ft_append(int const fd, char **overflow, int *ret);

#endif
