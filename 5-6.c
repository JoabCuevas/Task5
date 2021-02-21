#include <stdio.h>
#include <math.h>

int h;
int m;
char line[100];
int total_m;

int main(void) {


  printf("Insert the total of minutes\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &total_m);
  h = (total_m/60);
  m = (total_m %60);
  
  printf("%d hours %d minutes\n", h, m);
  return (0);

}