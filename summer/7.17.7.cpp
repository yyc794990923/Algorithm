/*************************************************************************
	> File Name: 7.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 15时01分19秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, b, c;
    vector<int> sum;
    while(cin >> a >> b) {
        c = a+b;
        sum.push_back(c);
    }
    for (auto i: sum) {
        cout << i << endl;
        cout << endl;
    }
    return 0;
}
