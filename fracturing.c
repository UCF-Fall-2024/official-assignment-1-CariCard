/*
Function for calculating width,Function for Calculating Height, 
Function for Calculating Distance, Function for Calculating Area, 
Function for Calculating Perimeter, Implementation Details
*/

#include <stdio.h>
#include <math.h>

int main()
{

#define PI = 3.14;
 
double calculate_width;
double calculate_height;
float distance;
double calculate_area;
double calculae_perimeter;


//getting info to calculate width
printf("What is the width?: \n");
scanf("%d", &width);
printf("The width of the city encompassed by your request is: %d", width);


//getting info to calculate height
printf("What is the height?: \n");
scanf("%d", &height);
printf("The height of the city encompassed by your request is: %d", height);

//calculate area
height*width= area
printf("The area of the city encompassed by your request is: %d", area);

//calculate distance
printf("What is the distance?: \n");

printf("Input x1: \n");
scanf("%d", &x1);

printf("Input x2: \n");
scanf("%d", &x2);

printf("Input y1: \n");
scanf("%d", &y1);

printf("Input y2: \n");
scanf("%d", &y2);

distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("The distance between two points is: %d", distance);

//calculate perimeter
 2 * (height + width)=perimeter
printf("The perimeter of the city encompassed by your request is: %d", perimeter);

return 0;
}
