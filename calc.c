#include <stdio.h>
int main(){
    char o; float a,b;
    scanf("%f%c%f",&a,&o,&b);
    if(o=='+') printf("%f",a+b);
    if(o=='-') printf("%f",a-b);
    if(o=='*') printf("%f",a*b);
    if(o=='/') printf("%f",a/b);
}
