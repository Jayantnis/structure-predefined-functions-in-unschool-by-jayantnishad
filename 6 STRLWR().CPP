#include<stdio.h>

#include<string.h>
 main()//strlwr() ad strupr() functions used
{
		char a[20];

		printf("\n Enter stirng:_ ");
		gets(a);
		printf("l is : %s",a);
		printf("\n lower string is :- %s ",strlwr(a));
		printf("\n upper string is :- %s ",strupr(a));
}
