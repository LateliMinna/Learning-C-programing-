#include <stdio.h>
#include <stdlib.h>
int N,i,U1,U2,U3;
int main()
{
    printf("\n  Hello in the 'N' first terms Fibonacci's siquence counter!!! \n\n Inter please a positive value of 'N' : ");
    scanf("%d",&N);
   if ( N > 0 ){

      if ( N == 1){
       printf(" \n  The first term of Fibonacci's siquence is : 1 \n " );

      }else{
        printf(" \n The first '%d'terms of Fibonacci's siquence are : 1, 2", N );
        U1=1;
        U2=2;
        for(i=0;i<N- 2; i++){
            U3=U1 +U2;
            printf(", %d", U3);
            U1=U2;
            U2=U3;
        }
        printf("\n");
        }
  }else
    printf(" ERROR please inter a positive value for 'N' ");
    return 0;
}
