#include<stdio.h>
void main()
{
     int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=(2*n);i++){
            if(i%2!=0)
            {
                printf("%d\n",i);
            }
    }
}
