#include<stdio.h>
#include<string.h>
int main()
{
	printf("%zu\n", sizeof(int));
	int len = strlen("abc");
	printf("%d\n",len);
	char arr1[] = "abcde";
	char arr2[] = { 'a','b','c','d','\0' };
	printf(arr1);
	printf(arr2);
	return 0;
}