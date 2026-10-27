#include<stdio.h>
void main()
{
int A, B, C, D, E, F, G, i, J;
    printf("Enter values of A, B, C, D, E, F, G: ");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);
    printf("\na. %d", A + B*C + (D*E) + F*G);
    
    printf("\nb. %d", A/B*C - B + A*D/3);

    printf("\nc. %d", A + ++B - --A);

    i = 6;
    J = (i++) + (++i);
    printf("\nd. %d", J);
 }