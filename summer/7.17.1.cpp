/*************************************************************************
	> File Name: 1.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 11时06分57秒
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
    for (auto i: sum)
        cout << i << endl;
    return 0;
}
