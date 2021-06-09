#include "libft.h"

char	*ft_uitoa(long long nbr)
{
	long long		divisor;
	int				curr;
	int				count;
	char			*str;

	curr = 0;
	divisor = 10;
	count = 0;
	str = (char*)malloc(11);
	while (divisor <= nbr)
		divisor *= 10;
	while (nbr > 0 || divisor > 1)
	{
		divisor /= 10;
		curr = nbr / divisor;
		str[count] = curr + 48;
		nbr %= divisor;
		count++;
	}
	str[count] = '\0';
	return (str);
}
