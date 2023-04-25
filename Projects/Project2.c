//09/21/2022
//Problem-make a calculator for shipping charges.
//The package weighs less than or equal to  100lbs the rate would be $10.00
//The package weighs more than 100lbs but less than or equal to 200lbs than the rate would be $20.00.
//All shipping rates are not pro-rated and are based on 1000 miles shipped.

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

main() {
	int pounds, distance;
	int rate, shipment, shipCharge;
	//input of distance and package weight
	printf("Enter Package Weight: \n");
	scanf("%i", &pounds);
	printf("Your package weight is: %i\n", pounds);
	printf("Enter Shipping Miles: \n");
	scanf("%i", &distance);
	printf("Your shipping miles are: %i\n", distance);

	//conditions of shipping weight
	if (pounds <= 100)
	{
		rate = 10;
	}
	else if (pounds <= 200)
	{
		rate = 20;
	}

	if (pounds > 200)
	{
		printf("Sorry! We do not ship packages greater than 200 pounds\n");
	}
	//the is about the dividing the miles into shipping segments
	shipment = distance / 1000;
	if (distance % 1000 != 0)
	{
		shipment = shipment + 1;
	}
//This is calculating the shipment charge
	if (pounds <= 200)
	{
		shipCharge = shipment * rate;
	}
	printf("Shipping charge is: %i\n", shipCharge);
system("pause");
}
