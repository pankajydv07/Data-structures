#include <stdio.h>

int main() {
    int a[200], n;
    int uniqueCount = 0;
    printf("Enter number of inputs : ");
    scanf("%d", &n);
    printf("Enter %d Numbers : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unique elements in array are: ");

    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d\t", a[i]);
            uniqueCount++;
        }
    }

    printf("\nThe number of unique elements in the array is %d.", uniqueCount);

    return 0;
}
