#include<stdio.h>
int main() {
    int grade1,grade2,result;
    printf("Enter grade1:\n");
    scanf("%d",&grade1);
    printf("Enter grade2:\n");
    scanf("%d",&grade2);
    result=grade1+grade2;
    printf("%d",result);
    result >= 60 ? printf("passed\n") : printf("failed\n");

}