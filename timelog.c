#include <stdio.h>
#include <time.h>

// Program that takes the current time and logs it in a file called log.txt

int main () {

time_t t;
time(&t);

FILE *fp;
fp = fopen ("log.txt", "a");
fprintf(fp, "Program executed: %s\n", ctime(&t));
fclose(fp);

return 0;

}