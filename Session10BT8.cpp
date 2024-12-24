#include <stdio.h>
int main() {
    int n,m;
    printf("Nhap so cot cua mang 2 chieu: ");
    scanf("%d", &n);
    printf("Nhap so hang cua mang 2 chieu: ");
    scanf("%d", &m);

    int arrayInt[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arrayInt[%d][%d] = ", i, j);
            scanf("%d", &arrayInt[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            int num = arrayInt[j][i];
            int k = j - 1;
            while (k >= 0 && arrayInt[k][i] > num) {
                arrayInt[k+1][i] = arrayInt[k][i];
                k--;
            }
            arrayInt[k+1][i] = num;
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