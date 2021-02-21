#include <stdio.h>
#include <math.h>

int h;
int m;
char line[100];
int total_m;

int main(void) {


  printf("Insert hours\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &h);
  printf("Insert minutes\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &m);
  total_m = (h*60)+m;
  printf("The total of minutes are %d\n", total_m);
  return (0);

}