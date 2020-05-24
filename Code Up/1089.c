#include<stdio.h>
 
int main(){
    
    int a,b,c;
    int j;
    scanf("%d %d %d",&a,&b,&c);
    
    for(j = 1; j <c; j++){
        
        a += b; 
        
    }
    printf("%d",a);
    
    
    return 0;
}
