
#include <stdio.h>

int main(void)

{
	int x = 0;
	int y = 0;

	printf("enter your marks then overall score\n");
	scanf("%i %i",&x, &y);

	if (x > y)
   {
	printf("you did well\n");
   }

	else if (x < y)
   {
	printf("you could do better\n");
   }

	else
	printf("marks fuckn done \n");

	return 0;
}
