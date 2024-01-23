/* To find out commission*/
#include<stdio.h>
int main()
{
	float sales, commission;
	printf("Enter total sales made:\n");
	scanf("%f", &sales);
	if(sales >= 8000)
		commission = 0.08 * sales;
	printf("commission is: %f\n", commission);
    return 0;
}