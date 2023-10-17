/*calculate of total expence*/

#include<stdio.h>
main ()
{
	int qty, dis ; 
	float rate, tot;
	
	printf("Enter Quantity of purchased:");
	scanf("%d",&qty);
	printf("Enter rate of product:");
	scanf("%f",&rate);
	
	if(qty>1000);
	
	dis=10;
	tot=(qty*rate)-(qty*rate*dis/100);
	printf("Total expences=Rs.%f",tot);

return 0;	
	
	
}
