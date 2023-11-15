#include <stdio.h>
int main(){
	int number;
	printf("chon so nguyen tu 1-100 la:");
	for( number=1 ; number<=100 ;number++){
		printf("%d\n",number);
	if(number%3==0 && number%5==0){
			printf("FizzBuzz\n");}
		else if(number%5==0){
			printf("Buzz\n");
		}else if(number%3==0){
		printf("Fizz\n");
		}
}
}
