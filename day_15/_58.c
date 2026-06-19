//Write a program to Rotate array left.

#include <stdio.h>

int main() {
    
int arr[50];
int i=0;
int n;
int temp;


printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

// logic
temp=arr[i];
for(i=0;i<=n;i++){
arr[i]=arr[i+1];
}
arr[n-1]=temp;
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}

return 0;
}
