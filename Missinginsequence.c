#include <stdio.h>
int findMissingTerm(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int d = (arr[n-1] - arr[0]) / n;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == expected)
            low = mid + 1;
        else {
            if (mid > 0 && arr[mid-1] == arr[0] + (mid-1) * d)
                return arr[0] + mid * d;
            high = mid - 1;
        }
    }

    return -1;  
}
int main() {
    int arr[] = {2, 4, 8, 10, 12, 14}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sequence: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    int result = findMissingTerm(arr, n);
    
    if (result != -1)
        printf("\nMissing term in the sequence is: %d\n", result);
    else
        printf("\nNo missing term found\n");
        
    return 0;
}
