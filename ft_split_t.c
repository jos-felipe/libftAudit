#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	**ss;
	char	*s;

	printf("ft_split:\n");
	i = 0;
	i++;
	s = "42 is the best tech.";
	ss = ft_split(s,' ');
	while(*ss)
	{
		printf("%s\n", *ss);
		ss++;
	}
	i++;
	s = "--1-2--3---4----5-----42";
	ss = ft_split(s,'-');
	while(*ss)
	{
		printf("%s\n", *ss);
		ss++;
	}
	i++;
	s = strdup("Tripouille");
	ss = ft_split(s,' ');
	while(*ss)
	{
		printf("%s\n", *ss);
		ss++;
	}
	return (0);
}