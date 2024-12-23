#include <stdio.h>
int main() {
    int arrayInt[] = {1,2,3,4,5,1,2,3}, n, size = sizeof(arrayInt)/sizeof(int), count = 0, arrayPos[size];
    printf("Nhap gia tri ban muon tim kiem: ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++) {
        if (arrayInt[i] == n) {
            arrayPos[count] = i;
            count++; 
        }
    }
    if (count == 0) {
        printf("%d khong co o trong mang ", n);
    }else {
        printf("%d dang nam o vi tri ", n);
        for (int i = 0; i < count; i++) {
            printf("%d,", arrayPos[i]);
        }
    }
    return 0;
}
