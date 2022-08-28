#include <stdio.h>
#include<string.h>
#pragma  warning(disable:4996)


void main()
{
    int const SIZE = 10;
    int intArray[10];
    printf("Insert %d integers please:", SIZE);
    for (int i = 0;i < SIZE;i++) {
        scanf_s("%d", &intArray[i]);
    }
    FILE* f1 = fopen("file1.bin", "w");
    fwrite(intArray, sizeof(int), SIZE, f1);
}
