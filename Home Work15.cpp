//
//  main.cpp
//  Home Work 15
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int h,m;
    
    printf("請輸入現在時間:");
    scanf("%d,%d",&h,&m);
    
    if(h<17 && h>7 && m<=59 && m>=0){
        printf("現在是上課時間。\n");
    }
    else if(h==7 && m<=59 && m>=30){
        printf("現在是上課時間。\n");
    }
    else if(h >= 25 || m >= 60 || m<=-1){
        printf("您輸入的是無效時間。\n");
    }
    else{
        printf("現在是放學時間。\n");
    }
}
