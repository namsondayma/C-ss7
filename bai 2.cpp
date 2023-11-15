#include <stdio.h>
int main(){
	for(int a=100;a<1000;a++){
    int b=a/100 , c=(a/10)%10, d=(a%10);
	if((b*b*b)+(c*c*c)+(d*d*d)==a){
		printf("so amstrong co 3 chu so la:%d\n",a); 
	} 
}
} 
