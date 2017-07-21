/*************************************************************************
	> File Name: 7.21.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月21日 星期五 08时16分50秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double month;
    double sum;
    for (int i = 0; i < 12; i++) {
        cin >> month;
        sum += month;
    }
    sum = sum/12;
    cout << '$';
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
