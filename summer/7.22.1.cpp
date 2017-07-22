/*************************************************************************
	> File Name: 7.22.1.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月22日 星期六 09时31分21秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int time, iphone;
    string a;
    cin >>time;
    while (time--) {
        cin >> a;
        a[5] = '6';
        for (int i = 5; i < 11; i++) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
