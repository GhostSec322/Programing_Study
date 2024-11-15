#include<stdio.h>
int main(void){
   int a1=  printf("Hello World\n"); // int printf( const char *format, ... );
   printf("%d\n",a1);
   printf("   /|\n");
   printf("  / |\n");
   printf(" /  |\n");
   printf("/   |\n");
   
   //Example
   int a= 10;
   long long b=10;
   printf("%d\n",a);
   printf("%lld\n",b);
   printf("Hello\"world\n");
   char name[]="GhostSec";
   printf("%s",name);
   return 0;
};