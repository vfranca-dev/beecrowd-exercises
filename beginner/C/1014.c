/*  Calculate a car's average consumption being provided the total 
    distance traveled (in Km) and the spent fuel total (in liters).

    Input
    The input file contains two values: one integer value X representing the total distance (in Km)
    and the second one is a floating point number Y  representing the spent fuel total, 
    with a digit after the decimal point.

    Output
    Present a value that represents the average consumption of a car with 
    3 digits after the decimal point, followed by the message "km/l".
    
    e.g.:
        14.286 km/l
    
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int ValueX;
    double ValueY;
    
    scanf("%d%lf",&ValueX,&ValueY);
    printf("%.3lf km/l\n",(ValueX/ValueY)); // Xkm / Yl = average consumption
    
}
