#include <stdio.h>
int main() {
    int arrayInt[] = {3,1,2,5,4}, size = sizeof(arrayInt) / sizeof(arrayInt[0]);
    for (int i = 0; i < size; i++) {
        int num = arrayInt[i];
        int j = i - 1;
        while (j >= 0 && arrayInt[j] > num) {
            arrayInt[j+1] = arrayInt[j];
            j--;
        }
        arrayInt[j+1] = num;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}