.DEFAULT_GOAL	:= a
PARENT_DIR		= $(shell dirname $(shell pwd))
LIBFT_PATH		= $(PARENT_DIR)
MANDATORY		= itoa split

CC 		= clang
CFLAGS 	= -I$(LIBFT_PATH)

$(MANDATORY): %: mandatory_start
	@$(CC) $(CFLAGS) ft_$*_t.c -L$(LIBFT_PATH) -lft && ./a.out && rm -f a.out

mandatory_start: update message
	@tput setaf 6
	make -C $(LIBFT_PATH)
	@tput setaf 4 && echo [Mandatory]

clean:
	make clean -C $(LIBFT_PATH) && rm -rf a.out*

fclean:
	make fclean -C $(LIBFT_PATH) && rm -rf a.out*

.PHONY:	mandatory_start m bonus_start b a fclean clean update message $(VSOPEN) $(MAIL)

