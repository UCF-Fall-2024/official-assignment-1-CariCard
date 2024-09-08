/*
Function for calculating width,Function for Calculating Height, 
Function for Calculating Distance, Function for Calculating Area, 
Function for Calculating Perimeter, Implementation Details
*/

#include <stdio.h>
#include <math.h>





int main(int argc, char**argv) // needs two arguments 
{
    return 0;
}

//calculate distance
double calculate_distance() // no arguments
{
    float distance;
    int x1;
    int x2;
    int y1;
    int y2;

    printf("Calculate distance: \n");
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
    printf("Point #1 entered x1 = - ", x1); 
    printf("y1 = - \n", y1);
    printf("Point #2 entered x2 = - ", x2);
    printf("y2 = - ", y2);
    printf("The distance between two points is: %lf", distance);

    // return 
}

//calculate perimeter
double calculate_perimeter()
{
    int perimeter;
    int height;
    int width;
    

    printf("Calculate perimeter: \n");
    printf("what is the height? \n");
    scanf("%d", &height);
    printf("What is the width? \n");
    scanf("%d", &width);
    perimeter = 2 * (height + width);

    printf("The perimeter of the city encompassed by your request is: %d", perimeter);

    //return scale 1-5?
}

//calculate area
double calculate_area()
{
    #define PI = 3.14159; // circle shape
    double area;
    double radius;

    printf("Calculate area: \n");
    printf("what is the radius? \n");
    scanf("%lf", &radius);
    area = PI * radius * radius;

    printf("The area of the city encompassed by your request is: %lf", area);
    
    //return scale 1-5?
}

//getting info to calculate width
double calculate_width()
{
    int area;
    int length;
    int width;

    printf("Calculate width: \n");
    printf("What is the length?: \n");
    scanf("%d", &length);
    printf("What is the area?: \n");
    scanf("%d", &area);
    width = area/length;
    
    printf("The width of the city encompassed by your request is: %d", width);
    
    //return
}

//getting info to calculate height
double calculate_height()
{
    int height;
    int area;
    int base;

    printf("Calculate height: \n");
    printf("What is the area?: \n");
    scanf("%d", &area);
    printf("What is the base? \n");
    scanf("%d", &base);
    height = 2*area/base;

    printf("The height of the city encompassed by your request is: %d", height);
 
    //return
}
