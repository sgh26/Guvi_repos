#include<stdio.h>

void larg(int x,int y,int z){
	if(x>y)
		if(x>z)
			printf("%d",x);
		else
			printf("%d",z);
	else
		if(y<z)
			printf("%d",z);
		else
			printf("%d",y);
}

int main(){
	int a, b, c;
	printf("Enter 3 numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	larg(a,b,c);
	return 0;
}

	
