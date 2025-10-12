#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{   
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", a);

	char b = 'x';
	scanf(" %c", &b);
	printf("%c\n", b);

	char arr[10];
	scanf("%[^\n]s", arr);
	printf("%s\n", arr);

	char arr1[10];
	scanf("%5s", arr1);
	printf("%s\n", arr1);

	int year = 0;
	int month = 0;
	int day = 0;
	printf("«Î ‰»Î»’∆⁄£∫");
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("%d-%d-%d\n", year, month, day);

	int d = 0;
	int e = 0;
	int c = scanf("%d%d", &d,&e);
	printf("%d\n", c);

	int f = 0;
	int g = 0;
	while (scanf("%d%d", &f, &g) !=EOF)
	{
		printf("%d\n", f + g);
	}
    return 0;
}