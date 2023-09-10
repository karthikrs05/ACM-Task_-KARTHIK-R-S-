#include <stdio.h>

int sumOfOddElements(int arr[], int length) {
    int oddSum = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }
    return oddSum;
}

int main() {
    
    int arr[] = {3,2,4,6,5,7,8,0,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    int result = sumOfOddElements(arr, length);
    printf("Sum of odd elements: %d\n", result); 

    return 0;
}
