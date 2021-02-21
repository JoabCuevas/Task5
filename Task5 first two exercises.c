#include <stdio.h>

char line[100];
float number;
float max;
float min;
float sum=0;
int height;
int width;
int area;

float Max(float a, float b){
  if(a>b | a==b){
      return a;
  }
  return b;
}

float Min(float a, float b){
  if(a<b | a==b){
      return a;
  }
  return b;
}


int main(void) {
 
printf("Enter five numbers\n");
for(int i=0; i<5;i++){
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &number);
  if (i==0){
    max = number;
    min = number;
    sum += number;
  }else {
  max = Max(max, number);
  min = Min(min, number);
  sum += number;
  }


}

printf("The min is %f\n", min);
printf("The max is %f\n", max);
printf("The average is %f\n", sum/5);

// in order to use integers numbers the "float" can be change to "int"

printf("What is the height of the rectangle(in cm)?");
scanf("%d", &height);
printf("What is its width? ");
scanf("%d", &width);
area = (width * height);
printf("The area is %d cm\n", area);
printf("The perimeter is %d cm\n", height*2 + width*2);


// This is how I feel https://www.youtube.com/watch?v=31HfP81oWDI&list=FLb3xKv2onuK3sUcugSxnslw&index=1
}