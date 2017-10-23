//
//  main.c
//  C_04_01_Exchange
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);
    
    int a = x / 100;
    int b = x % 100 / 10;
    int c = x % 10;
    
    printf("%d\n", c * 100 + b * 10 + a);
    
    return 0;
}
