#include <stdio.h>

int prime(int n){
    int i;
    for(i=2;i<=n/2;i++)
        if(n/i==0)
        return 0;
        else
        return 1;
    
}

int main() {
    int n;
    printf(" enter the number :");
    scanf("%d",&n);
    if(prime(n)==1)
    printf("number is not prime");
    else
    printf("number is prime");
    return 0;
}