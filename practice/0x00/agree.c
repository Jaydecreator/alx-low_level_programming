#include <stdio.h>

int main(void)

{

//if typed y || Y, 
char c;
	printf("what is your answer\n");
	scanf("%c", &c);

if (c == 'y' || c == 'Y')
{
	printf("answer agreed\n");
}

else if (c == 'n' || c =='N')
//not (c == 'y' || 'Y')					//if typed n || N,
{
	printf("answer not agreed\n");
}
	return(0);
}
