# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dida-sil <dida-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 18:21:10 by dida-sil          #+#    #+#              #
#    Updated: 2022/07/04 13:43:19 by dida-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FT_PRINTF_SRC = ft_flags_c.c\
				ft_flags_d.c\
				ft_flags_p.c\
				ft_flags_percent.c\
				ft_flags_s.c\
				ft_flags_u.c\
				ft_flags_ux.c\
				ft_flags_x.c\
				ft_printf.c\
				ft_putchar.c\
				ft_puthex.c\
				ft_putstr.c\
				ft_putuhex.c\
				ft_putunbr.c\
				ft_strlen.c\
				ft_putaddress.c\

all: $(NAME)

$(NAME): 
	@cc -Wall -Wextra -Werror -c $(FT_PRINTF_SRC) 
	@ar rcs $(NAME) *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re