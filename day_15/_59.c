//Write a program to Rotate array right.

#include <stdio.h>

int main() {
    
int arr[50];
int i=0,n;
int temp;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}


// logic

temp=arr[n-1];
for (i = 0; i < n ; i++)
{
    arr[n-1-i]=arr[n-i-2];
}
arr[0]=temp;

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}

return 0;
}
