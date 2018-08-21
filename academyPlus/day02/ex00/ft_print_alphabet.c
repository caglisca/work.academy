/* putch example: printing the alphabet */
#include <stdio.h>
#include <unistd.h>

int ft_putchar (char c)
{
	putchar(c);
}


int main()
{
	char c;
	for (c = 'a' ; c <= 'z' ; c++) ft_putchar(c);

return 0;
}


