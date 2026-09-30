#include <stdio.h>

int main()

{

int km, milage, fuelprice, fuelrequried, totalcost;

printf("\n Enter the distance");

scanf("%d", &km);

printf("\n Enter the milage");

scanf("%d", &milage);

printf("Enter the prize of the fuel");

scanf("%d", &fuelprice);

fuelrequried=km/milage;

totalcost=fuelrequried*fuelprice;

printf("the fuel requried is:%d\n", fuelrequried);

printf("the total cost of the road trip is:%d", totalcost);

return 0;

}

