#include<stdio.h>//program is  a strcpy
#include<string.h>
main()
{	char a[50],b[50];
	printf("\n Enter a source string ");
	scanf("%s",a);
	strcpy(b,a);
	printf("copied strings:- %s",b);
		
	return 0;
}
