#include<stdio.h>

void ero(int n){
	n%2==0?printf("Even"):printf("Odd");
}

int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	ero(n);
	return 0;
}

	
