/*************************************************************************
	> File Name: 7.21.3.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月21日 星期五 10时06分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int time, stop, sum;
    cin >> time;
    while (time--) {
        cin >> stop;
        sum = 3;
        while (stop--) {
            sum = (sum -1)*2;
        }
        cout << sum << endl;
    }
    return 0;
}

