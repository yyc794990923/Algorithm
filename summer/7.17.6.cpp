/*************************************************************************
	> File Name: 6.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 14时54分24秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, c;
    int i,number;
    vector<int> sum;
    while(cin >> number) {
        c = 0;
        for (i = 0; i < number; i++) {
            cin >> a;
            c += a;
        }
        sum.push_back(c);
    }
    for (auto x: sum)
        cout << x << endl; 
    return 0;
}
