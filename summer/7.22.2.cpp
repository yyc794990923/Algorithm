/*************************************************************************
	> File Name: 7.22.2.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月22日 星期六 09时53分35秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int time;
    cin >> time;
    while(time--) {
        cin >> a >> b;
        cout << (a%100 + b%100)%100 << endl;
    }
    return 0;
}
