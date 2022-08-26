#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test!=0){
		char str[80];
		fgets(str,79,stdin);
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='A'&&str[i]<='Z') str[i]=str[i]+32;
	}
	char *tok=strtok(str," ");
		while(tok!=NULL){
			*tok=toupper(*tok);
			printf("%s ",tok);
			tok= strtok(NULL," ");
		}
		test--;
	}
}
