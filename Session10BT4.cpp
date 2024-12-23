#include <stdio.h>
int main() {
    int arrayInt[] = {3,1,2,5,4}, size = sizeof(arrayInt) / sizeof(arrayInt[0]), temp, min;
    for (int i = 0; i < size-1; i ++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arrayInt[j] < arrayInt[min]) {
                min = j;
            }
        }
        temp = arrayInt[min];
        arrayInt[min] = arrayInt[i];
        arrayInt[i] = temp;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}