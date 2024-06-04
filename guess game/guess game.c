#include <stdio.h>
int main()
{
    int secret,guess,count,fcount=0,tcount=0;

    for(count=0 ; count<3 ; count++){
    printf("Enter the secret number :");
    scanf("%d" , &secret);
    printf("Guess the secret number ?");
    scanf("%d" , &guess);
    if(secret==guess){
        printf("true\n");
        tcount++;}
    else
        printf("false\n");
        fcount++;
}
    printf("You tried :%d times\n" , count);
    printf("True :%d\n" , tcount);
    printf("False :%d\n" , fcount);
}
