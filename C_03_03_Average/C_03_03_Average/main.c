//
//  main.c
//  C_03_03_Average
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    
    double average = (a + b) / 2.0;
    
    printf("%d和%d的平均值 = %f\n", a, b, average);
    
    return 0;
}
