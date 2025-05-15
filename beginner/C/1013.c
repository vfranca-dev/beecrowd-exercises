/*  Make a program that reads 3 integer values and present the greatest one followed by
    the message "eh o maior". Use the following formula:
    MaiorAB = (a+b+abs*(a-b))/2;
    
    Input
    The input file contains 3 integer values.
    
    Output
    Print the greatest of these three values followed by a space and the message “eh o maior”.
    e.g.:
        106 eh o maior
    
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int ValueA, ValueB, ValueC, ValueGreatest,Aux;
    scanf("%d%d%d",&ValueA,&ValueB,&ValueC);
    
    //MaiorAB = (a+b+abs(a-b))/2;
    //MaiorABC = (MaiorAB+c+abs(MaiorAB-C))
    Aux = ValueA - ValueB;
    ValueGreatest = (ValueA+ValueB+abs(Aux))/2;
    Aux = ValueGreatest - ValueC;
    ValueGreatest = (ValueGreatest+ValueC+abs(Aux))/2;
    printf("%d eh o maior\n",ValueGreatest);
    
}

/*  i had forgotten to use the formula given by the exercise, so i'm saving my previous solution here;
    ValueGreatest=A;
    if(ValueB>ValueGreatest){
        ValueGreatest = ValueB;
        printf("%d eh o maior\n",ValueGreatest);
    }
    else{
        if(ValueC>ValueGreatest){
            ValueGreatest = ValueC;
            printf("%d eh o maior\n",ValueGreatest);
        }
        else{
            printf("%d eh o maior\n",ValueGreatest);
        }
    }
*/