/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{
    const float pigreco=3.14;
    float d;
    float area_quadrato, area_cerchio, area_triangolo;
    printf("Inserisci il dato d: ");
    scanf("%f", &d);
    
    
    area_quadrato = d*d;
    area_cerchio = pigreco * ((d*d)/4);
    area_triangolo = (sqrt(3)/4)*(d*d);
    
    
    printf("L'area del quadrato e' %f \n", area_quadrato);
    printf("L'area del cerchio e' %f \n", area_cerchio);
    printf("L'area del triangolo e' %f \n ", area_triangolo);
    return 0;
}
