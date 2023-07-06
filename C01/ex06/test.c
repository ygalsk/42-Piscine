
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
#include <stdio.h>

int ft_strlen(char *str);

int main() {
    char str[] = "Hello, world!";
    int length = ft_strlen(str);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}

