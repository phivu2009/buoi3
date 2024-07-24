#include <stdio.h>

// Hàm hoán đổi giá trị của hai phần tử
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm phân hoạch cho QuickSort
int Partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }

    Swap(&arr[i + 1], &arr[right]);
    return i + 1;
}

// Hàm QuickSort đệ quy
void QuickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivotIndex = Partition(arr, left, right);
        QuickSort(arr, left, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, right);
    }
}

// Hàm in mảng
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 4, 6, 1, 3, 2, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    PrintArray(arr, size);

    QuickSort(arr, 0, size - 1);

    printf("\nArray after QuickSort:\n");
    PrintArray(arr, size);

    return 0;
}
