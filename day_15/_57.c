//Write a program to Reverse array.

#include <stdio.h>

int main() {
    
int arr[50];
int i,n,temp;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

for(int i=0;i<(n/2);i++){

    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    
}
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}

return 0;
}
