/*  
    John wants to calculate and show the amount of spent fuel liters on a trip,
    using a car that does 12 Km/L. For this, he would like you to help him through a simple program.
    To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h)
    . In this way, you can get distance and then, calculate how many liters would be needed. 
    Show the value with three decimal places after the point.
    
    Input
    The input file contains two integers. The first one is the spent time in the trip (in hours).
    The second one is the average speed during the trip (in Km/h).
    
    Output
    Print how many liters would be needed to do this trip, with three digits after the decimal point.
    
    e.g.:
        70.833
    
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int Distance, TravellingTime, TravellingSpeed;
    scanf("%d%d",&TravellingTime,&TravellingSpeed);
    //distance = time * speed
    Distance = TravellingTime*TravellingSpeed;
    //12.0km/l
    printf("%.3lf\n",(Distance/12.0)); //12/1 -> Distance/12 /X
    
}
