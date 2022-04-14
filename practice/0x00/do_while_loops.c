#include <stdio.h>

int main(void)
{
int n;
do
{
n = scanf("width: %i", &n);
}
while (n < 1);

// for each row
for (int i = 0; i < n; i++)

    {
	//for each column
	for (int y = 0; y < n; y++)

	{
		//print brick nxn
		printf("?");
	}

	//move to next row
	printf("\n");
    }

}
