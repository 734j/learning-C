#include <stdio.h>
#include <string.h>

int main() {

float num;

printf("Please enter a number: ");

scanf("%f", &num);

if (num > 0) {
    printf("%f is a positive number!\n ", num);
} else if (num < 0) {
    printf("%f is a negative number!\n ", num);
} else {
    printf("%f is 0!\n ", num);
}


return 0;

}