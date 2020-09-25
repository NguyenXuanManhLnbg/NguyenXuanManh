//
//  main.c
//  sision 9.1.3try
//
//  Created by mac 2 on 9/24/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n1=0,n2=1,n3,i,sophantu;
      
     printf("Ban hay nhap so phan tu trong day Fibonacci: ");
     scanf("%d",&sophantu);
     printf("\n%d %d",n1,n2);  
      
     for(i=2;i<sophantu;i++)
     {
      n3=n1+n2;
      printf(" %d",n3);
      n1=n2;
      n2=n3;
     }
    printf("\n");
}



