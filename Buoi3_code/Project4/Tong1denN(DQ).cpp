//#include <stdio.h>
//
//// Hàm đệ quy để tính tổng từ start đến end
//int sum_array_recursive(int start, int end) {
//    // Trường hợp cơ bản: nếu start bằng end, trả về start
//    if (start == end) {
//        return start;
//    }
//
//    // Tính giá trị giữa
//    int mid = (start + end) / 2;
//
//    // Tính tổng của hai nửa
//    int left_sum = sum_array_recursive(start, mid);
//    int right_sum = sum_array_recursive(mid + 1, end);
//
//    // Trả về tổng của hai nửa
//    return left_sum + right_sum;
//}
//
//int main() {
//    int n = 10;  // Giá trị của n
//
//    // Gọi hàm đệ quy và in kết quả
//    int result = sum_array_recursive(1, n);
//    printf("Tong cua mang tu 1 den %d la: %d\n", n, result);
//
//    return 0;
//}
