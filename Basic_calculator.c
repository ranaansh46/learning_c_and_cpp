//program to display hello world on console 
//written by Ansh Rana 
//Contact : @ranaansh46 twitter and instgram
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int cas,d,e;
    float c,a,b;
    while(1)
    {
        printf("\nenter first value :");
        scanf("%f",&a);
        printf("\nenter second value :");
        scanf("%f",&b);
        printf("\nselect operation you want to apply\n1. add\n2. substract\n3. multiply\n4. divide\n5. exit\n");
        scanf("%d",&cas);
        switch (cas)
        {
        case 1:
            printf("\nsum of both the values = %f",a+b);
            break;
        case 2:
            printf("\ndifference of both the values = %f",a-b);
            break;
        case 3:
            printf("\nproduct of both the values = %f",a*b);
            break;
        case 4:
            printf("\ndo you want \n\t1.remainder\n\t2.quotient\n\t");
            scanf("%d",&cas);
            if(cas==1)
            {
                e=a;
                d=b;
                c=e%d;
                printf("remainder after division = %f",c);
            }
            else if(cas==2)
            {
                c=a/b;
                printf("quotient after division = %f",c);
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\ninvalid choice");
        }
    }
}
