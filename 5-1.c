#include <stdio.h>

int c;
int f;
char line[100];


int main(void) {


  printf("Insert centigrades\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &c);
  f = (c*9/5) + 32;
  printf("%d grades in Fahrenheit", f);


}