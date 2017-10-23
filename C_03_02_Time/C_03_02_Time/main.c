//
//  main.c
//  C_03_02_Time
//
//  Created by zhangjiawei on 2017/10/23.
//  Copyright © 2017年 zhangjiawei. All rights reserved.
//

#include <stdio.h>

int main() {
    int hour1 = 0;
    int minute1 = 0;
    scanf("%d %d", &hour1, &minute1);
    
    int hour2 = 0;
    int minute2 = 0;
    scanf("%d %d", &hour2, &minute2);
    
    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;
    int time = time2 - time1;
    
    printf("时间差是%d小时%d分.\n", time / 60, time % 60);
    
    return 0;
}
