/*  
    Read the four values corresponding to the x and y axes of two points in the plane,
    p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, 
    showing four decimal places, according to the formula: 
    Distance = sqrt(((x2-x1)*(x2-x1))+(y2-y1)*(y2-y1))

    Input
    The input file contains two lines of data. The first one contains two double values: x1 y1 
    and the second one also contains two double values with one digit after the decimal point: x2 y2.

    Output
    Calculate and print the distance value using the provided formula, with 4 decimal places.
    
    e.g.:
        4.4721
    
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //so i can use sqrt
int main (){
    
    double ValueX1, ValueX2, ValueY1, ValueY2,Distance;
    scanf("%lf%lf%lf%lf",&ValueX1,&ValueY1,&ValueX2,&ValueY2);
    //sqrt(((x2-x1)*(x2-x1))+(y2-y1)*(y2-y1))
    Distance = sqrtl(((ValueX2 - ValueX1)*(ValueX2 - ValueX1)) + ((ValueY2 - ValueY1)*(ValueY2 - ValueY1)));
    printf("%.4lf\n",Distance);
    
}
