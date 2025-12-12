#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            count++;
    }

    if (arr[n - 1] > arr[0])
        count++;

    if (count == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
