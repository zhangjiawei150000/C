//
//  main.c
//  C_02_02_Plus
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    printf("请输入两个整数:");
    scanf("%d %d", &a, &b);
    
    printf("%d + %d = %d\n", a, b, a + b);
    
    return 0;
}
