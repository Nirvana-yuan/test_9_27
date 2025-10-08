#include<stdio.h>
#include<string.h>
int main()
{
	printf("hello,C\n");
	printf("%zu\n", sizeof(int));
	int len = strlen("abc");
	printf("%d\n",len);
	char arr1[] = "abcd";
	char arr2[] = { 'a','b','c','d','\0' };
	printf(arr1);
	return 0;
}