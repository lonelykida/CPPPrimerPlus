#pragma once
#include "head.hpp"

/*
    ������������:
    1.��Ŀ�й涨�˺�����ʱ�������ע�ͣ�
    2.�Զ��庯��������:
        ҳ��_��Ŀ��_���������磺
        void P35_2_7_1_ShowNameAddress(void);
        ��ʾ��35ҳ��2.7�ڵ�1��ĺ�������������ShowNameAddress
*/

void P35_2_7_1_ShowNameAddress(void){
    string name, address;
    cout<<"�������������:";
    cin>>name;
    cout<<"���������סַ:";
    cin>>address;
    cout<<"����:"<<name<<endl;
    cout<<"סַ:"<<address<<endl;
}

void P35_2_7_2_ChangeLength(void){
    long length;
    cout<<"��������ĳ���:";
    cin>>length;
    cout<<"����"<<length<<"ת��������:"<<length*220<<"��."<<endl;
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
    cout<<"�������������:";
    cin>>age;
    cout<<"�������"<<age<<"ת��������:"<<age*12<<"����."<<endl;
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
    cout<<"CHAR_BIT��λ��:"<<CHAR_BIT<<"λ."<<endl;
    cout<<"char��λ��:"<<sizeof(char)<<"λ."<<endl;
    cout<<"char�����ֵ:"<<CHAR_MAX<<endl;
    cout<<"char����Сֵ:"<<CHAR_MIN<<endl;
    cout<<"signed char��λ��:"<<sizeof(signed char)<<"λ."<<endl;
    cout<<"signed char���ֵ:"<<SCHAR_MAX<<endl;
    cout<<"signed char��Сֵ:"<<SCHAR_MIN<<endl;
    cout<<"unsigned char��λ��:"<<sizeof(unsigned char)<<"λ."<<endl;
    cout<<"unsigned char���ֵ:"<<UCHAR_MAX<<endl;
    cout<<"short��λ��:"<<sizeof(short)<<"λ."<<endl;
    cout<<"short�����ֵ:"<<SHRT_MAX<<endl;
    cout<<"short����Сֵ:"<<SHRT_MIN<<endl;
    cout<<"unsigned short��λ��:"<<sizeof(unsigned short)<<"λ."<<endl;
    cout<<"unsigned short�����ֵ:"<<USHRT_MAX<<endl;
    cout<<"int��λ��:"<<sizeof(int)<<"λ."<<endl;
    cout<<"int�����ֵ:"<<INT_MAX<<endl;
    cout<<"int����Сֵ:"<<INT_MIN<<endl;
    cout<<"unsigned int��λ��:"<<sizeof(unsigned int)<<"λ."<<endl;
    cout<<"unsigned int�����ֵ:"<<UINT_MAX<<endl;
    cout<<"long��λ��:"<<sizeof(long)<<"λ."<<endl;
    cout<<"long�����ֵ:"<<LONG_MAX<<endl;
    cout<<"long����Сֵ:"<<LONG_MIN<<endl;
    cout<<"unsigned long��λ��:"<<sizeof(unsigned long)<<"λ."<<endl;
    cout<<"unsigned long�����ֵ:"<<ULONG_MAX<<endl;
    cout<<"long long�����ֵ:"<<LLONG_MAX<<endl;
    cout<<"long long����Сֵ:"<<LLONG_MIN<<endl;
    cout<<"unsigned long long�����ֵ:"<<ULLONG_MAX<<endl;
}
void P68_3_7_1_ChangeHeight(){
    //���Ե��»����ַ�ָ������λ�õ�Ҫ��
    double height;
    const double tranverse = 12;
    cout<<"������������(Ӣ��):";
    cin>>height;
    cout<<"������"<<height<<"ת����Ӣ����"<<height*tranverse<<"Ӣ��."<<endl;
}
void P68_3_7_2_GetBMI(){
    double height_inch,height_foot,weight,bmi;
    const double f2i = 0.0254;
    const double b2m = 2.2;
    cout<<"�������������(��):";
    cin>>weight;
    cout<<"������������(xӢ��xӢ��,��:3 5):";
    cin>>height_foot>>height_inch;
    height_inch+=(height_foot*12)*f2i;
    weight  = weight/b2m;
    bmi = weight/(height_inch*height_inch);
    cout<<"���BMIָ��Ϊ:"<<bmi<<endl;
}
void P68_3_7_3_Weidu(void){
    
}










// //ͼ���ڽӱ�ķǵݹ�����
// #define Max 100
// typedef struct adjvex{  //���ṹ
//     int adjvex;
//     struct adjvex*next;
// }EdgeNode;

// typedef struct{ //�ڽӱ����ݽṹ
//     char data;
//     EdgeNode*firstarc;
// }vertices,Adjvex[Max];

// typedef struct{
//     Adjvex adjlist;
//     int numvex,numEdge;
// }GraphAdjList;  //ͼ

// bool visit[Max];    //���ʼ�¼
// int DeepStack[Max]; //����ջ
// int top = 0;        //ջ��ָ��
// void DFSTrave(GraphAdjList G){
//     int i;
//     for(i = 0;i < G.numvex;i++){   //��ʼ�����ʼ�¼������ջ
//         visit[i] = false;
//         DeepStack[i] = -1;
//     }
//     for(i = 0;i < G.numvex;i++){    //�������н�� - ��֤δ��ջ���������Ҳ�ܷ��ʵ�
//         if(!visit[i]) DeepStack[top++] = i;  //��һ�������ջ
//         while(top){   //��ʼ��ջ�ж�ÿ�����������
//             int curV = DeepStack[--top];
//             if(!visit[curV]){//����ǰ��ջ���δ���ʣ����¼������
//                 visit[curV] = true; //��¼��ǰ����ѷ���
//                 printf("%d ",curV);  //curV��¼�ľ��ǽ��ֵ������ֱ���������
//             }
//             //���ſ�curV���������Ƿ񶼷��ʹ�����δ���ʹ�����curV��δ���ʽ����ջ
//             EdgeNode* p = G.adjlist[curV].firstarc; //p��curV�ĵ�һ���ڽӵ�
//             while(p){   //����curV�������ڽӵ㣬ֱ���ҵ���һ��δ���ʽ��
//                 if(!visit[p->adjvex]){  //��ǰδ���ʣ���ջ��������һ�ֱ���
//                     DeepStack[top++] = curV;    //curV��ջ
//                     DeepStack[top++] = p->adjvex;//��ǰ�ڽӽ����ջ
//                     break;  //������һ��ѭ��
//                 }else p = p->next;  //�����������һ���ڽӵ�
//             }//�����ڽӵ㶼����
//         }
//     }
//     printf("\n");//���У���д�ɲ�д(��Ϊ�ϱ߷��������ʱ�������Ŀո񣬲��ǻ���)
// }
