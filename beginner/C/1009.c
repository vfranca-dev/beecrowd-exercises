/*  Make a program that reads a seller's name,
    their fixed salary and the sale's total made by them in the month (in money). 
    Considering that this seller receives 15% over all products sold, 
    write the final salary (total) of this seller at the end of the month , with two decimal places.

    Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
    
    Don’t forget the blank spaces.
    
    Input
    The input file contains a text (employee's first name),
    and two double precision values, that are the seller's salary and the total value sold by him/her.
    
    Output
    Print the seller's total salary, according to the given example.
    
    e.g.:
        TOTAL = R$ 684.54
    
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char NameEmployee[20];
    double Salary, ValueSold;
    
    scanf("%s%lf%lf",&NameEmployee,&Salary,&ValueSold);
        
    //Total salary gets salary +15% of ValueSold 
    printf("TOTAL = R$ %.2lf\n",(Salary+(ValueSold*0.15)));
    
}