#include <stdio.h>
#include <math.h>

int h;
int w;
char line[100];


int main(void) {


  printf("Insert height (in cm)\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &h);
  printf("Insert width\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &w);
  printf("The perimeter is %d cm", (w+h)*2);
  return (0);

}