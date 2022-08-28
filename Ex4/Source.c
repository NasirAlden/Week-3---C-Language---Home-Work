#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)



void main() {
	int myArray[20] = {1,3,2,5,4,7,6,9,8,12,10,13,11,15,14,17,16,19,18,20};
	FILE* f4 = fopen("file4.bin", "w");
	fwrite(myArray, sizeof(int), 20, f4);
}