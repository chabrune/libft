#include <stdio.h>

int	ft_sign(const char *str, int *ptri)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			ret *= -1;
		i++;
	}
	*ptri = i;
	return (ret);
}

int ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	ret;

	ret = 0;
	sign = ft_sign(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * sign);
}
#include <stdio.h>

int main(void)
{
    char str[] = "100";
    printf("%d", ft_atoi(str));

}