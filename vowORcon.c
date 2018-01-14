#include<stdio.h>

void vrc(char ch){
	if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) )
		if(ch=='a' ||ch=='A' ||ch=='e' ||ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U')
			printf("Vowel");
		else
			printf("Consonant");
	else
		printf("Invalid Character");
}

int main(){
	char c;
	printf("Enter a character");
	scanf("%c",&c);
	vrc(c);
	return 0;
}

	
