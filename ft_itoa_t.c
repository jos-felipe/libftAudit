#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	int	i;
	char	*ref;
	char	*s;

	i = 0;
	i++;
	n = -__INT_MAX__ - 1;
	ref = "-2147483648";
	s = ft_itoa(n);
	if (!strcmp(s, ref))
		printf("%d. OK\n", i);
	else
		printf("%d. NOK - Esperado: %s X Recebido: %s\n",\
		i, ref, s);
	
	i++;
	n = __INT_MAX__;
	ref = "2147483647";
	s = ft_itoa(n);
	if (!strcmp(s, ref))
		printf("%d. OK\n", i);
	else
		printf("%d. NOK - Esperado: %s X Recebido: %s\n",\
		i, ref, s);

	i++;
	n = 0;
	ref = "0";
	s = ft_itoa(n);
	if (!strcmp(s, ref))
		printf("%d. OK\n", i);
	else
		printf("%d. NOK - Esperado: %s X Recebido: %s\n",\
		i, ref, s);
	return (0);
}