/*
    Coding.hpp和Coding.cpp的公共头文件
*/
#pragma once
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <array>
#include <algorithm>
#include <climits>
#include <wctype.h>

using namespace std;

//常量定义区




//函数原型
//第二章
void P35_2_7_1_ShowNameAddress(void);//P35_2.7.1-显示姓名和地址
void P35_2_7_2_ChangeLength(void);  //P35_2.7.2-将long改成码
void P35_2_7_3_GetOtherFunc(void);  //P35_2.7.3-获取其他函数
void P35_2_7_3_Func1(void);         //P35_2.7.3.1-函数1
void P35_2_7_3_Func2(void);         //P35_2.7.3.2-函数2
void P35_2_7_4_AgeToMonth(void);    //P35_2.7.4-年龄转换成月
double P35_2_7_5_CeisusToFahrenheit(void);//P35_2.7.5-摄氏度转换成华氏度
double P35_2_7_6_LightYear(void);   //P35_2.7.6-光年转换
void P35_2_7_7_TimeDisplay(void); //P35_2.7.7-时间展示

//第三章
//重要1:climits中的符号常量
void showLimits(void);      //P41_展示limits中各种不同数据类型的最值
//重要2:float和double的精度问题
void P68_3_7_1_ChangeHeight(void);  //P68_3.7.1-转换身高
void P68_3_7_2_GetBMI(void);  //P68_3.7.2-计算BMI
void P68_3_7_3_Weidu(void);  //P68_3.7.3-计算纬度
