//
//  main.c
//  C_03_01_Height
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    double foot = 0.0;
    double inch = 0.0;
    printf("请分别输入身高的英尺和英寸, 如输入\"5 7\"表示5英尺7英寸:");
    scanf("%lf %lf", &foot, &inch);
    
    double height = (foot + inch / 12) * 0.3048;
    printf("身高是%f米.\n", height);
    
    return 0;
}
