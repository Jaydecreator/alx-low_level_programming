#include <stdio.h>

void fuck(int n);

int main(void)

{

	 {
	     fuck(5);
	 }

	return 0;
}





















void fuck(int n)
{
	for (int i = 1; i <= n; i++)
	printf("fuck\n");
}
