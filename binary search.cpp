#include<stdio.h>

int b_search(int [], int ,int,int);

int main() {
    int num, r;
    int a[100], n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements of the array in sorted order: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to search in the array: ");
    scanf("%d", &num);
    
    r = b_search(a, 0, n - 1, num);
    
    if(r != -1) {
        printf("Element found in the array at index %d and position: %d.\n", r, r + 1);
    } else {
        printf("Element not found in the array.\n");
    }
}

int b_search(int a[], int l, int h, int n) {
    while(l <= h) {
        int m = l + (h - l) / 2; 
        
        if(a[m] == n) {
            return m;
        } else if(n > a[m]) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return -1;
}
