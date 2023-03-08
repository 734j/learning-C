#include <stdio.h>
#include <string.h>

int main() {

float myNumber, myNumber2, result;
int choice;


printf("\nSkriv in ditt val: Add(1), Sub(2), Mult(3), Div(4) \n");
scanf("%d", &choice);

printf("\nSkriv in dina 2 nummer: \n");
scanf("%f %f", &myNumber, &myNumber2);


switch (choice) {

case 1:
	result = myNumber + myNumber2;
	break;

case 2: 
	result = myNumber - myNumber2;
	break;

case 3:
	result = myNumber * myNumber2;
	break;

case 4:
	result = myNumber / myNumber2;
	break;

default:
       		
	printf("Ditt val är fel! Kör om programmet igen!\n");
	return 1;
}

printf("Ditt svar: %f\n", result);

return 0;

}
