#include <stdio.h>
int main() {
    int size = 5, n, arrayInt[size] = {1,2,3,4,5}, check = 1;
    printf("Nhap gia tri ban muon tim kiem: ");
    scanf("%d", &n);
    for (int i = 0 ; i < size; i++) {
        if (arrayInt[i] == n) {
            printf("%d dang o vi tri %d", n, i);
            check = 0;
            break;
        }
    }
    if (check) {
        printf("Gia tri %d ko co trong mang", n);
    }
    return 0;
}