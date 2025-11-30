#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("Not Applicable\n");
    else
        printf("Second Largest: %d\n", secondLargest);

    return 0;
}
