//Write a program to Move zeroes to end.

#include <stdio.h>

int main() {
    
int arr1[50];

int i,n;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr1[i]);
}

printf("given array :\n");
for(i=0;i<n;i++){
    printf("%d\t",arr1[i]);
}

//logic

int arr2[50];
int left = 0;      // Tracks where to put the next non-zero
int right = n - 1; // Tracks where to put the next zero

for (int i = 0; i < n; i++) {
    if (arr1[i] != 0) {
        arr2[left] = arr1[i];
        left++; // Only move the left pointer forward when we place a non-zero
    } else {
        arr2[right] = 0;
        right--; // Only move the right pointer backward when we place a zero
    }
}

printf("\nprocessed array :\n");

for(i=0;i<n;i++){
    printf("%d\t",arr2[i]);
}
return 0;
}