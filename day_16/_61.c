//Write a program to Find missing number in array.

#include <stdio.h>

int main() {
    
int arr1[50];
int i,j,n;
int max;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr1[i]);
}
