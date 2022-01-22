#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int				sign;
	unsigned long	rus;

	sign = 1;
	rus = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		rus = (rus * 10) + (*s - 48);
		s++;
	}
	return (sign * rus);
}

int check_digit(char *s)
{
    int i;

    i = 0;
    if (s[i] == '-' || s[i] == '+')
        i++;
    while (s[i])
    {
        if (!ft_isdigit(s[i]))
        {
            write (1, "ERROR\n", 6);
            return (0);
        }
        i++;
    }
    return (1);
}

int check_doubl(char **s)
{
    int i = 1;
    int j;
    int a;
    int b;

    while(s[i])
    {
        j = i + 1;
        a = ft_atoi(s[i]);
        while (s[j])
        {
            b = ft_atoi(s[j]);
            if (a == b)
            {
                write (1, "ERROR double\n", 13);
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            if(!check_digit(av[i]))
                return (0);
            i++;
        }
        if (!check_doubl(av))
            return (0);
    }
}