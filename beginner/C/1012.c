/*  Make a program that reads three floating point values: A, B and C. Then, calculate and show:
    a) the area of the rectangled triangle that has base A and height C.
    b) the area of the radius's circle C. (pi = 3.14159)
    c) the area of the trapezium which has A and B by base, and C by height.
    d) the area of the square that has side B.
    e) the area of the rectangle that has sides A and B.
    
    Input
    The input file contains three double values with one digit after the decimal point.
    
    Output
    The output file must contain 5 lines of data. Each line corresponds to one of the areas 
    described above, always with a corresponding message (in Portuguese) and one space between 
    the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
    
    e.g.:
        TRIANGULO: 7.800
        CIRCULO: 84.949
        TRAPEZIO: 18.200
        QUADRADO: 16.000
        RETANGULO: 12.000
    
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    double ValueA, ValueB, ValueC;
    //reads three floating point values: A, B and C.
    scanf("%lf%lf%lf",&ValueA,&ValueB,&ValueC);
    
    //a) the area of the rectangled triangle that has base A and height C.
    printf("TRIANGULO: %.3lf\n",((1.0/2)*ValueC*ValueA)); //((1.0/2)*height*base)
    
    //b) the area of the radius's circle C. (pi = 3.14159)
    printf("CIRCULO: %.3lf\n",(3.14159*(ValueC*ValueC))); //(pi*(radius*radius))
    
    //c) the area of the trapezium which has A and B by base, and C by height.
    printf("TRAPEZIO: %.3lf\n",(((ValueA+ValueB)/2.0)*ValueC)); //A=((base a+base b)/2)*height
    
    //d) the area of the square that has side B.
    printf("QUADRADO: %.3lf\n",(ValueB*ValueB)); // area = side * side 
    
    //e) the area of the rectangle that has sides A and B.
    printf("RETANGULO: %.3lf\n",(ValueA*ValueB)); //area = length * width
}