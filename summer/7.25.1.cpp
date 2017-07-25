/*************************************************************************
	> File Name: 7.25.1.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月25日 星期二 14时51分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
    return b==0?a:(gcd(b,a%b));
}

int main()
{
    int time;
    int a,b,c;
    cin >> time;
    while(time--) {
        cin >> a >> b;
        c = 2*b;
        while (gcd(a,c) != b) {
            c += b;
        }
        cout << c <<endl;
    }
    return 0;
}
