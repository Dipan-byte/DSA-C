#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("No second largest");
        return 0;
    }

    int arr[1000]; // assuming n <= 1000, adjust if needed
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN; // largest
    int max2 = INT_MIN; // second largest
    int hasMax1 = 0;
    int hasMax2 = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (!hasMax1 || x > max1) {
            if (hasMax1 && x != max1) {
                max2 = max1;
                hasMax2 = 1;
            }
            max1 = x;
            hasMax1 = 1;
        } else if (x != max1 && (!hasMax2 || x > max2)) {
            max2 = x;
            hasMax2 = 1;
        }
    }

    if (!hasMax2) {
        printf("No second largest");
    } else {
        printf("%d", max2);
    }

    return 0;
}
