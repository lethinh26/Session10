#include <stdio.h>
int main() {
    int arrayInt[] = {3,1,2,5,4}, size = sizeof(arrayInt) / sizeof(arrayInt[0]), temp, n, check;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arrayInt[j] > arrayInt[j+1]) {
                temp = arrayInt[j];
                arrayInt[j] = arrayInt[j+1];
                arrayInt[j+1] = temp;
            }
        }
    }
    printf("Nhap gia tri ban muon tim kiem: ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++) {
        check = 1;
        if (arrayInt[i] == n) {
            printf("%d nam o vi tri %d", n, i);
            check = 0;
            break;
        }
    }
    if (check) {
        printf("%d khong co trong mang", n);
    }
    return 0;
}