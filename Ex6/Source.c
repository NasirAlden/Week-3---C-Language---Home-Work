#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

void main()
{
	struct Item
	{
		int val;
		char name[100];
		short answer;
	};

	struct Item* stArray;
	struct Item* runItem;
	int num,totalVal=0;
	printf("How many Items do you want to save? ");
	scanf_s(" %d", &num);
	stArray = malloc(sizeof(struct Item) * num);
	if (stArray == NULL) {
	//error
	}
	else {
	
	runItem=stArray;

	for (int i = 0;i < num;i++) {
		scanf_s(" %d",&runItem->val);
		getchar();
		gets(runItem->name);
		totalVal += runItem->val;
		if (runItem->val > 10 && strlen(runItem->name) > 5)
			runItem->answer = 1;
		else
			runItem->answer = 0;
		runItem++;
	
	}
	FILE* f6 = fopen("file6.bin", "w");
	fwrite(stArray, sizeof(struct Item), num, f6);
	printf("Total Val = %d ", totalVal);
	fclose(f6);
	}


	free(stArray);
}