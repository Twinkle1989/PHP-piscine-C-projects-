# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 23:12:20 by tsolanki          #+#    #+#              #
#    Updated: 2024/03/06 19:47:30 by tsolanki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
cc -Wall -Werror -Wextra -c *.c 
ar -rc libft.a *.o
find . -name "*.o" -type f -delete
