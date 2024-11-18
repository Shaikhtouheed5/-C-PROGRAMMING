#include <stdio.h>
int main() {
    int arr1[50][50], brr1[50][50], crrl[50][50], drrl[50][50] ,i, j, n;
    printf("\n\nADDITION OF THREE MATRICES :\n");
    printf("-------------------\n");
    printf("INPUT THE SIZE OF THE SQUARE MATRIX (LESS THAN 5): ");
    scanf("%d", &n);
    printf("INPUT ELEMENTS IN THE FIRST MATRIX :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("INPUT ELEMENTS IN THE SECOND MATRIX :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }
     printf("INPUT ELEMENTS IN THE THIRD MATRIX :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &crrl[i][j]);
        }
    }
    printf("\nTHE FIRST MATRIX is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }
printf("\nTHE SECOND MATRIX IS :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }
    printf("\nTHE THIRD MATRIX is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crrl[i][j]);
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            drrl[i][j] = arr1[i][j] + brr1[i][j]+ crrl[i][j];
        }}
    printf("\nTHE ADDITION OF THREE MATRIX IS : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crrl[i][j]);
    }
    printf("\n\n");
}
