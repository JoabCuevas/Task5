#include <stdio.h>
#include <math.h>

int r;
int v;
char line[100];


int main(void) {


  printf("Insert radius\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &r);
  v = (3.141592*3/4) * (r*r*r);
  printf("The volume of the sphere is %d cm^3", v);


}