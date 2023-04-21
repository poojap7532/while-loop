#include<stdio.h>

int main(){
	int i,num;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	i=1;
	while(i<=num){
	printf("%d\n", i);
	i++;	
}	
	return 0;
}
