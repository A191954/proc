#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	//char str[100];
	char * str = "";
	int i;

	printf("Enter a value :");
	scanf("%s %d", str, &i);

	printf("\nYou entered: %s %d ", str, i);
	printf("\n");
	return 0;
}