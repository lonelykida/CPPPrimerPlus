#pragma once
#include "head.hpp"

/*
    函数命名规则:
    1.题目中规定了函数名时，会给出注释；
    2.自定义函数名如下:
        页码_题目名_函数名，如：
        void P35_2_7_1_ShowNameAddress(void);
        表示第35页第2.7节第1题的函数，函数名是ShowNameAddress
*/

void P35_2_7_1_ShowNameAddress(void){
    string name, address;
    cout<<"请输入你的姓名:";
    cin>>name;
    cout<<"请输入你的住址:";
    cin>>address;
    cout<<"姓名:"<<name<<endl;
    cout<<"住址:"<<address<<endl;
}

void P35_2_7_2_ChangeLength(void){
    long length;
    cout<<"请输入你的长度:";
    cin>>length;
    cout<<"长度"<<length<<"转换成码是:"<<length*220<<"码."<<endl;
}

void P35_2_7_3_GetOtherFunc(void){
    P35_2_7_3_Func1();
    P35_2_7_3_Func1();
    P35_2_7_3_Func2();
    P35_2_7_3_Func2();
}
void P35_2_7_3_Func1(void){
    cout<<"Three Blind mice"<<endl;
}   
void P35_2_7_3_Func2(void){
    cout<<"See how they run"<<endl;
}
void P35_2_7_4_AgeToMonth(void){
    int age;
    cout<<"请输入你的年龄:";
    cin>>age;
    cout<<"你的年龄"<<age<<"转换成月是:"<<age*12<<"个月."<<endl;
}
double P35_2_7_5_CelsiusToFahrenheit(void){
    double c = 0;
    cout<<"Please enter a Celsius value:";
    cin>>c;
    cout<<c<<"degrees Celsius is "<<1.8*c+32.0<<" degrees Fahrenheit."<<endl;
    return 1.8*c+32.0;
}
double P35_2_7_6_LightYear(void){
    cout<<"Enter the number of light years: ";
    double lightyears;
    cin>>lightyears;
    cout<<lightyears<<" light years = "<<lightyears*63240<<" astronomical units."<<endl;
    return lightyears*63240;
}
void P35_2_7_7_TimeDisplay(void){
    cout<<"Enter the number of hours:";
    int hours,minutes;
    cin>>hours;
    cout<<"Enter the number of minutes:";
    cin>>minutes;
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}
void showLimits(){
    cout<<"CHAR_BIT的位数:"<<CHAR_BIT<<"位."<<endl;
    cout<<"char的位数:"<<sizeof(char)<<"位."<<endl;
    cout<<"char的最大值:"<<CHAR_MAX<<endl;
    cout<<"char的最小值:"<<CHAR_MIN<<endl;
    cout<<"signed char的位数:"<<sizeof(signed char)<<"位."<<endl;
    cout<<"signed char最大值:"<<SCHAR_MAX<<endl;
    cout<<"signed char最小值:"<<SCHAR_MIN<<endl;
    cout<<"unsigned char的位数:"<<sizeof(unsigned char)<<"位."<<endl;
    cout<<"unsigned char最大值:"<<UCHAR_MAX<<endl;
    cout<<"short的位数:"<<sizeof(short)<<"位."<<endl;
    cout<<"short的最大值:"<<SHRT_MAX<<endl;
    cout<<"short的最小值:"<<SHRT_MIN<<endl;
    cout<<"unsigned short的位数:"<<sizeof(unsigned short)<<"位."<<endl;
    cout<<"unsigned short的最大值:"<<USHRT_MAX<<endl;
    cout<<"int的位数:"<<sizeof(int)<<"位."<<endl;
    cout<<"int的最大值:"<<INT_MAX<<endl;
    cout<<"int的最小值:"<<INT_MIN<<endl;
    cout<<"unsigned int的位数:"<<sizeof(unsigned int)<<"位."<<endl;
    cout<<"unsigned int的最大值:"<<UINT_MAX<<endl;
    cout<<"long的位数:"<<sizeof(long)<<"位."<<endl;
    cout<<"long的最大值:"<<LONG_MAX<<endl;
    cout<<"long的最小值:"<<LONG_MIN<<endl;
    cout<<"unsigned long的位数:"<<sizeof(unsigned long)<<"位."<<endl;
    cout<<"unsigned long的最大值:"<<ULONG_MAX<<endl;
    cout<<"long long的最大值:"<<LLONG_MAX<<endl;
    cout<<"long long的最小值:"<<LLONG_MIN<<endl;
    cout<<"unsigned long long的最大值:"<<ULLONG_MAX<<endl;
}
void P68_3_7_1_ChangeHeight(){
    //忽略掉下划线字符指定输入位置的要求。
    double height;
    const double tranverse = 12;
    cout<<"请输入你的身高(英寸):";
    cin>>height;
    cout<<"你的身高"<<height<<"转换成英尺是"<<height*tranverse<<"英尺."<<endl;
}
void P68_3_7_2_GetBMI(){
    double height_inch,height_foot,weight,bmi;
    const double f2i = 0.0254;
    const double b2m = 2.2;
    cout<<"请输入你的体重(磅):";
    cin>>weight;
    cout<<"请输入你的身高(x英尺x英寸,如:3 5):";
    cin>>height_foot>>height_inch;
    height_inch+=(height_foot*12)*f2i;
    weight  = weight/b2m;
    bmi = weight/(height_inch*height_inch);
    cout<<"你的BMI指数为:"<<bmi<<endl;
}
void P68_3_7_3_Weidu(void){
    
}










// //图的邻接表的非递归深搜
// #define Max 100
// typedef struct adjvex{  //结点结构
//     int adjvex;
//     struct adjvex*next;
// }EdgeNode;

// typedef struct{ //邻接表数据结构
//     char data;
//     EdgeNode*firstarc;
// }vertices,Adjvex[Max];

// typedef struct{
//     Adjvex adjlist;
//     int numvex,numEdge;
// }GraphAdjList;  //图

// bool visit[Max];    //访问记录
// int DeepStack[Max]; //深搜栈
// int top = 0;        //栈顶指针
// void DFSTrave(GraphAdjList G){
//     int i;
//     for(i = 0;i < G.numvex;i++){   //初始化访问记录和深搜栈
//         visit[i] = false;
//         DeepStack[i] = -1;
//     }
//     for(i = 0;i < G.numvex;i++){    //遍历所有结点 - 保证未入栈的其他结点也能访问到
//         if(!visit[i]) DeepStack[top++] = i;  //第一个结点入栈
//         while(top){   //开始在栈中对每个结点做深搜
//             int curV = DeepStack[--top];
//             if(!visit[curV]){//若当前出栈结点未访问，则记录并访问
//                 visit[curV] = true; //记录当前结点已访问
//                 printf("%d ",curV);  //curV记录的就是结点值，所以直接输出即可
//             }
//             //接着看curV的其余结点是否都访问过，若未访问过，则curV及未访问结点入栈
//             EdgeNode* p = G.adjlist[curV].firstarc; //p是curV的第一个邻接点
//             while(p){   //遍历curV的所有邻接点，直到找到第一个未访问结点
//                 if(!visit[p->adjvex]){  //当前未访问，入栈并进行下一轮遍历
//                     DeepStack[top++] = curV;    //curV入栈
//                     DeepStack[top++] = p->adjvex;//当前邻接结点入栈
//                     break;  //进入下一轮循环
//                 }else p = p->next;  //否则继续看下一个邻接点
//             }//所有邻接点都访问
//         }
//     }
//     printf("\n");//换行，可写可不写(因为上边访问输出的时候是留的空格，并非换行)
// }
