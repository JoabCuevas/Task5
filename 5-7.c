#include <stdio.h>
#include <math.h>

int h;
int w;
int d;
char line[100];

int main(void) {


  printf("Insert the heigth of your room (in meters)\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &h);
  printf("Insert the width of your room\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &w);
  printf("Insert the depth of your room\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &d);

  
  printf("The volumen of your room is %d meter^3", h*w*d);
  return (0);

}