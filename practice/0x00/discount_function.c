#include <stdio.h>

float discount(float reg_price,int percentage_off);
int main(void)

{
float reg_price;
float percentage_off;

	printf("Enter you price\n");
	scanf("%f", &reg_price);
	printf(" enter your discount percentage \n");
	scanf("%f", &percentage_off);

float sale = discount(reg_price, percentage_off);

	printf("With discount of %.2f your discount price is: %.2f \n", percentage_off, sale);


	return 0;
}
















float discount(float reg_price,int percentage_off)
{

	return reg_price * (100 - percentage_off) / 100;

}
