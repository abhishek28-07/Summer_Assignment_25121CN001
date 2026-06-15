#include <stdio.h>
int main() {
    int arr[100], n, key, i, found = 0,frq=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element of which frequency to be find: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            frq++;
            
        }
    }
    if(found == 1) {
        printf("Frequency of %d is %d\n", key, frq);
    }
    if(found == 0) {
        printf("Element not found\n");
    }
    return 0;
}