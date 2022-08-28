#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define SIZEA 4
#define SIZEB 8


void main()
{
    int SIZE1 = SIZEA, SIZE2 = SIZEB;
    int intArray1[SIZEA];
    int intArray2[SIZEB];
    int sum1 = 0, sum2 = 0;
    printf("Insert %d integers please:", SIZE1);
    for (int i = 0;i < SIZE1;i++) {
        scanf_s("%d", &intArray1[i]);
        sum1 += intArray1[i];
    }
    printf("Insert %d integers please:", SIZE2);
    for (int i = 0;i < SIZE2;i++) {
        scanf_s("%d", &intArray2[i]);
        sum2 += intArray2[i];
    }
    FILE* f2 = fopen("file2.bin", "w");
    if (sum1 >= sum2)
        fwrite(intArray1, sizeof(int), SIZE1, f2);
    else
        fwrite(intArray2, sizeof(int), SIZE2, f2);

}
