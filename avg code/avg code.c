#include <stdio.h>
int main() {
    int x,y,z,sum,avg;
    printf("Please enter first number:");
    scanf("%d",&x);
    printf("Please enter second number:");
    scanf("%d",&y);
    printf("Please enter third number:");
    scanf("%d",&z);
    sum=x+y+z;
    avg=sum/3;
    printf("mid is:%d",avg);
return 0;
}
