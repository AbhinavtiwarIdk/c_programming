#include<stdio.h>

int main()
{
	char maths ;
	char science ;
	
	printf("student paseed in subjects\n");
	 scanf("%c\n & %c\n",&maths , &science);
	
		
     if (maths){
     	printf("students will be awarded 15 rs");
	 }		
		
	else if (science){
		
		printf("stutents will be awrded 15 rs");
	}	
	
	else  if(maths and science){
	
	printf("students will be awarded 45 rs");
		}	
