#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct Item
{
	int val;
	char name[100];
	short answer;
};


void main() {
	struct Item arr[3] = { { 9,"Item1",} ,
						   { 11,"Item2",} ,
						   { 12,"Item_3",} };
	for (int i = 0;i < 3;i++) {
		if (arr[i].val > 10 && strlen(arr[i].name) > 5)
			arr[i].answer = 1;
		else
			arr[i].answer = 0;
	}
	FILE* f3 = fopen("file3.bin", "w");
	fwrite(arr, sizeof(struct Item), 3, f3);
	fclose(f3);
}