  /* 
  Title : Weight/ Height converter
  Date : 2026
  Author : H4nr1s3ld0n
  Description : A converter for Height, Weight and Degrees into Feets, pounds and fahrenheits.
  */


#include <stdio.h>

double convertHeight(double x);
double convertWeight(double y);
double convertDegrees(double z);

int main(void){
    double input;
    int i;
    int howMany;
    char type;
    double result = 0.0;
    
    scanf("%d", &howMany);
    
    for(i=0;i<howMany;i++){
        scanf("%lf %c", &input, &type);
    
            if(type == 'm')
            {
                result = convertHeight(input);
                printf("%.6lf ft\n", result);
            }
            else if( type == 'g')
            {
                result = convertWeight(input);
                printf("%.6lf lbs\n", result);
            }
            else if( type == 'c')
            {
                result = convertDegrees(input);
                printf("%.6lf f\n", result);
            }
    }
}

double convertHeight(double x){
    double compute;
    compute = x * 3.2808;
    return compute;
}

double convertWeight(double y){
    double compute;
    compute = y * 0.002205;
    return compute;
    
}

double convertDegrees(double z){
    double compute;
    compute = 32 + 1.8 * z;
    return compute;
    
}
