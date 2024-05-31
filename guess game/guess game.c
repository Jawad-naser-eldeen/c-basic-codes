#include <stdio.h>
int main()
{
    int secret,guess,count;
    count=0;
    printf("Enter the secret number:");
    scanf("%d",&secret);
    printf("Guess the secret number?");
    scanf("%d",&guess);
    count=count++;
    printf("%d",count);
    if(secret=guess) 
        printf("true");
    else
        printf("false");
    return 0;
}