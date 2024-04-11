#include<stdio.h>
int hcf(int a,int b);

int main(){
    int n1,n2,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if (n1<n2) result=hcf(n1,n2);
    else result=hcf(n2,n1);
    printf("Hcf of %d,%d is %d",n1,n2,result);

}
int hcf(int a,int b){
    int c;
    while(a!=0){
        c=b%a;
        b=a;
        a=c;
    }
    return b;
}