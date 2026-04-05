#include<stdio.h>
#include<math.h>

int main()
{
    float dr, sc, hc, eoq, tbo;

    printf("Enter the demand rate\n");
    scanf("%f", &dr);

    printf("Enter the setup cost\n");
    scanf("%f", &sc);

    printf("Enter the holding cost per item per unit time\n");
    scanf("%f", &hc);

    eoq = sqrt((2 * dr * sc) / hc);
    tbo = sqrt((2 * sc) / (hc * dr));

    printf("EOQ = %.2f\n", eoq);
    printf("TBO = %.2f\n", tbo);

    return 0;
}