#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)



void main() {
	int num,sum=0,count=0;
	FILE* f4 = fopen("file5.bin", "r");
	if (!f4) {
	//error
	}
	else {
		while (fread(&num, sizeof(int), 1, f4)) {
			printf("%d ", num);
			count++;
			sum += num;
		}
		printf("\nThere are %d items in the file.\n", count);
		printf("Sum = %d", sum);
	}
	
}