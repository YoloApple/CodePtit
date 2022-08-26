#include<stdio.h>
int logarit(int n){
    int dem=0;
    while(n>=10){
        n/=10; 
        dem++;
    }
    return dem;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",logarit(n)+1);
    return 0;
    
}
 