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
    int l = 0, r = size-1, res;
    check = 0;
    while (l<=r) {
        int m =  l + (r-l)/2;
        if (arrayInt[m] == n) {
            check = 1;
            res = m;
            break;
        }else if (arrayInt[m] < n) {
            l = m + 1;
        }else {
            r = m - 1;
        }
    }
    
    if (check) {
        printf("%d dang nam o vi tri %d", n, res);
    }else {
        printf("%d khong ton tai trong mang", n);
    }
    return 0;
}
