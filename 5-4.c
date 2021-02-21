#include <stdio.h>
#include <math.h>

int k;
float m;
char line[100];


int main(void) {


  printf("Insert kilometer per hour\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &k);
  m = k * 0.6213712;
  printf("In miles per hour is %f\n", m);
  return (0);

}