#include<stdio.h>

int main(){
	
	
	printf("hello world\n");
	int i, age ;
	 for(i=0; i<10; i++){
		
		printf("%d \nEnter your age\n",i);
	
		scanf("%d",&age);
/*	if(age>10){
		
		break;
	}*/
	if (age>10){
		
		continue;
	}
	
	
	printf("we have not come acros any continue statements\n");
	printf("we have not come acros any continue statements\n");
	printf("we have not come acros any continue statements\n");
	printf("JAY IS A GOOD BOY\n")	;
	
}
	return 0;
	
	
}
