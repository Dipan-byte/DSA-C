#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0}; // assume values <= 999

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int found = 0;
    for(int i = 0; i < 1000; i++){
        if(freq[i] > n/2){
            printf("Majority Element: %d", i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("No majority element");
    }

    return 0;
}
