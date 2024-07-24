//#include <stdio.h>
//#include <stdlib.h>
//
//// Hàm hoán đổi giá trị của hai phần tử
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// Hàm phân hoạch cho QuickSort
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];  // Chọn phần tử cuối làm pivot
//    int i = (low - 1);  // Vị trí của phần tử nhỏ hơn pivot
//
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] <= pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//
//// Hàm QuickSort đệ quy
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high);
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//
//// Hàm tìm kiếm nhị phân không đệ quy
//int binarySearchNonRecursive(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        // In các giá trị hiện tại để debug
//        printf("left = %d, mid = %d, right = %d\n", left, mid, right);
//
//        if (arr[mid] == target) {
//            return mid; // Tìm thấy phần tử
//        }
//
//        if (arr[mid] < target) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return -1; // Không tìm thấy phần tử
//}
//
//int main() {
//    int n, target;
//
//    // Nhập kích thước của mảng
//    printf("Nhap kich thuoc cua mang: ");
//    scanf_s("%d", &n);
//
//    // Sử dụng phân bổ động cho mảng
//    int* arr = (int*)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        printf("Khong the cap phat bo nho\n");
//        return -1;
//    }
//
//    // Nhập các phần tử của mảng
//    printf("Nhap cac phan tu cua mang: ");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    // Nhập giá trị cần tìm
//    printf("Nhap gia tri can tim: ");
//    scanf_s("%d", &target);
//
//    // Sắp xếp mảng trước khi tìm kiếm nhị phân
//    quickSort(arr, 0, n - 1);
//
//    // In mảng sau khi sắp xếp
//    printf("Mang sau khi sap xep: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Gọi hàm tìm kiếm nhị phân
//    int result = binarySearchNonRecursive(arr, n, target);
//    if (result != -1) {
//        printf("Phan tu duoc tim thay tai vi tri so: %d\n", result + 1);
//    }
//    else {
//        printf("Phan tu khong duoc tim thay\n");
//    }
//
//    // Giải phóng bộ nhớ đã cấp phát
//    free(arr);
//
//    return 0;
//}
