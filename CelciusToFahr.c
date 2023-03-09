#include <stdio.h>

int main () {

float cels, fahr;
printf("\nSkriv in celsius för konversion \n");
scanf("%f", &cels);

fahr = (cels  * 9 / 5) + 32;
printf("%f\n", fahr);

return 0;

}
