//
//  main.c
//  C_03_04_Exchange
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    int a = 1;
    int b = 9;
    int c = 0;
    
    c = a;
    a = b;
    b = c;
    
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
