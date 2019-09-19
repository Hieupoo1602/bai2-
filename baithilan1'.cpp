#include <stdio.h>
#include <string.h>
void lower_case(char s[],int n){
	for (int i = 0; i <strlen(s) ;i++)
	{
		if(s[i]>=65 && s[i]<=90){
			printf("%c",s[i]+32);
		}

		
}}
int main(){
	char s[10];
	lower_case(s,10);
	printf("nhap mang\n");
	
	
	scanf("%c",lower_case);
	return 0;
}
