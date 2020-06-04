#include<stdio.h>
#include<string.h>
//strupr() in
int main()
{	char a[10];
	printf("\n Enter string :- ");
	gets(a);
	printf("\n lowercase format enter please:- %s",a);
	printf("\n converting uppercase format :- %s ",strupr(a));
	return 0;

}
