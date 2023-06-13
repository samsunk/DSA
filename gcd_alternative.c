#include<stdio.h>
int GCD(int a,int b);
void main(){
    int a,b,r;

    printf("Enter the two numbers:\n");
    scanf("%d %d",&a,&b);

    r=GCD(a,b);
    printf("GCD=%d",r);
}
int GCD(int a, int b){
    if(b==0)
    return a;
    else if(a<b)
    return (GCD(b,a));
    else
    return (GCD(b,a%b));
}

