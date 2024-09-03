/*
Function for calculating width,Function for Calculating Height, 
Function for Calculating Distance, Function for Calculating Area, 
Function for Calculating Perimeter, Implementation Details
*/

#include <stdio.h>
#include <math.h>


#define PI = 3.14159; // circle shape

//no global variables
//double calculate_width;
//double calculate_height;
//float distance;
//double calculate_area;
//double calculae_perimeter;

int main() // needs two arguments 
{
return 0;
}

//calculate distance
void double calculate_distance()// no arguments
{
printf("What is the distance?: \n");
printf("Enter x1: \n");
scanf("%d", &x1);
printf("Enter x2: \n");
scanf("%d", &x2);
printf("Enter y1: \n");
scanf("%d", &y1);
printf("Enter y2: \n");
scanf("%d", &y2);

distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("Point #1 entered x1 = - ", x1; "y1 = - ", y1);
printf("Point #2 entered x2 = - ", x2; "y2 = - ", y2);
printf("The distance between two points is: %d", distance);
// return 
}

//calculate perimeter
void double calculate_perimeter()
{
 2 * (height + width)=perimeter
printf("Point #1 entered x1 = - ", x1; "y1 = - ", y1);
printf("Point #2 entered x2 = - ", x2; "y2 = - ", y2);
printf("The perimeter of the city encompassed by your request is: %d", perimeter);
//return scale 1-5?
}

//calculate area
void double calculate_area()
{
area = PI * radius * radius;
printf("Point #1 entered x1 = - ", x1; "y1 = - ", y1);
printf("Point #2 entered x2 = - ", x2; "y2 = - ", y2);
printf("The area of the city encompassed by your request is: %d", area);
//return scale 1-5?
}

//getting info to calculate width
void double calculate_width()
{
printf("What is the width?: \n");
scanf("%d", &width);
printf("Point #1 entered x1 = - ", x1; "y1 = - ", y1);
printf("Point #2 entered x2 = - ", x2; "y2 = - ", y2);
printf("The width of the city encompassed by your request is: %d", width);
 //return
}

//getting info to calculate height
void double calculate_height()
{
printf("What is the height?: \n");
scanf("%d", &height);
printf("Point #1 entered x1 = - ", x1; "y1 = - ", y1);
printf("Point #2 entered x2 = - ", x2; "y2 = - ", y2);
printf("The height of the city encompassed by your request is: %d", height);
 //return
}
