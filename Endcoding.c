#include<stdio.h>
#include<string.h>
void encod(char str[200]){
	int n=strlen(str);
	int i,j;
	for(i=0;i<n-1;i++){
	int count = 1;
        while(i < n-1  && str[i] == str[i + 1]){
            count++;
            i++;
        }
    printf("%c%d",str[i],count);
	}
}
	
int main(){
	int n;
	scanf("%d\n",&n);
	char str[200];
	for(int i=0;i<n;i++){
		fgets(str,199,stdin);
		encod(str);
		printf("\n");
	}
return 0;
}