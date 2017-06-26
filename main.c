//
//  main.c
//  program
//
//  Created by 20161104578 on 17/6/22.
//  Copyright © 2017年 20161104578. All rights reserved.
//


#include<stdio.h>
int main()
{
     FILE *fr;
     char a[70];
     char b[70];
    int i;
    fr=fopen("//Users//c20161104578//Desktop//GPS170510.log","r");
    if(fr==NULL)
        printf("文件打开失败！");
    for(i=0;i<=10;i++)
       fscanf(fr,"%s%s",a,b);
    for(i=0;i<=10;i++)
      printf("%s\n%s\n",a,b);
         fclose(fr);
         return 0;
}









          

