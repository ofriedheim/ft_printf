#include "libft.h"
#include <stdio.h>

static int	count_digits(size_t n)
{
	int c;

	c = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		c++;
	}
	return (c);
}

char		*ft_itoa_pointer(int *num)
{
	char	*str;
	char	*digits;
	int		len;
	int		i;
	size_t		address;

	address = (size_t)num;
	digits = "0123456789abcdef";
	i = -1;
	len = count_digits(address);
	if (!(str = (char*)malloc((sizeof(*str) * len + 1))))
		return (NULL);
	str[len] = '\0';
	i = -1;
	while (++i < len)
	{
		str[len - 1 - i] = digits[address % 16];
		address /= 16;
	}
	return (str);
}