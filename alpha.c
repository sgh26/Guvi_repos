#include<stdio.h>

void vrc(char ch){
	if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) )
		printf("Alphabet");
	else
		printf("NOT");
}

int main(){
	char c;
	printf("Enter a character");
	scanf("%c",&c);
	vrc(c);
	return 0;
}

	
