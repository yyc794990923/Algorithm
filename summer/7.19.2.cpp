/*************************************************************************
	> File Name: 7.19.2.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月19日 星期三 17时16分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n) {
        if(n==0)break;
        int a,b,c,d;   //分别代表一岁二岁三岁四岁及其以上的母牛的数目。
        if(n<=4)
            cout<<n<<endl;   //若n<=4，很容易得出总数为n
        else{
            n=n-4;
            a=b=c=d=1;
            for(int i=0;i<n;i++) {
                d=c+d;//当年大母牛数目d为前一年c和d的总和
                c=b;//b母牛长了一岁到了c
                b=a;//同上
                a=d;//长成的母牛和原本的母牛共生出新的小母牛a个             
            }
            cout<<a+b+c+d<<endl;        
        }   
    }
}

