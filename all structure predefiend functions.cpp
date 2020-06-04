#include<stdio.h>  ///1.strcmp() predefined functions in <string.h>
#include<conio.h>
#include<string.h>
int main()
{	char string1[]="manish";	/* this is  a functions  which compares
							 two strings to find out wethers  
							they are same or differernt .the two strings are compared 
							characters by character until
							there is a mismatch or end of
 							one of the string is reached ,which ever occurs frist 
 							the two strings are idetical ,strcmp() return a value zero 0 .
							if they're not, it returns the numeric
							differences  between the ASCII values of the frist non-matching pairs of character .here 
								is a program which pairs of characters .
							here is a program which puts strcmp() in action. */

	char string2[]="sunil";
	
	int i,j,k;
	
	
	i=strcmp(string1,"manish");
	j=strcmp(string1,string2);
	k=strcmp(string1,"manishsunil");
	printf("\n %d %d %d ",i,j,k);
	getch();
	return 0;
}
