#include <stdio.h>
#include<string.h>

int main(void) {
	char s;
	scanf("%c",&s);

	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
	{
		printf("VOWELS");
	}
	else
	{
		printf("CONSONANT");
	}
	
	// your code goes here
	return 0;
}
