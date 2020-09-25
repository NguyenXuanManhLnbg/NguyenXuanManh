//
//  main.c
//  sision 9.2try
//
//  Created by mac 2 on 9/24/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,d;
    do
    {
        printf("Nhap so a: ");
        scanf("%d", &a);
        printf("Nhap so b: ");
        scanf("%d", &b);
        
    }while (a>b);
    
    for(int i=a; i<=b; i++)
    {
        if(i%2==1)
        {
            d=d+i;
        }
    }
    
    printf("Tong cac so le tu a: %d toi b: %d la: %d", a,b,d);
    printf("\n");
}
