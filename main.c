#include "ft_printf.h"
#include "stdio.h"

int main(void)
{
	char initial = -128;
	char *surname = "Harazka";
	int age = 23;
	void *ptr;

	ptr = &age;
	// ft_printf("hello %c %s aged %i, %%, %d\n", initial, surname, age, 100);
	printf("%c%c%c%c%c%c\n", 'a', 'i', 'u', 'c', 'e', 'i');
	ft_printf("%c%c%c%c%c%c", 'a', 'i', 'u', 'c', 'e', 'i');
}
