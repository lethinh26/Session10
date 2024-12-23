#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap so cot cua mang 2 chieu: ");
    scanf("%d", &n);
    printf("Nhap so dong cua mang 2 chieu: ");
    scanf("%d", &m);
    int arrayInt[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arrayInt[%d][%d] = ", i, j);
            scanf("%d", &arrayInt[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j ++) {
            int num = arrayInt[i][j];
            int k = j-1;
            while (j >= 0 && arrayInt[i][k] > num) {
                arrayInt[i][k+1] = arrayInt[i][k];
                k--; 
            }
        arrayInt[i][k+1] = num; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ",arrayInt[i][j]);
        }
        printf("\n");
    }
    return 0;
}