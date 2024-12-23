#include <stdio.h>
int main() {
    int arrayInt[] = {3,1,2,5,4}, temp, size = sizeof(arrayInt) / sizeof(arrayInt[0]);
    for (int i = 0; i < size - 1; i ++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arrayInt[j] > arrayInt[j+1]) {
                temp = arrayInt[j];
                arrayInt[j] = arrayInt[j+1];
                arrayInt[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}