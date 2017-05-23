/*************************************************************************
	> File Name: sum.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月23日 星期二 16时14分10秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, b, i, sum = 0;
    vector<int> arr;
    cin >> a;
    for (i = 0; i < a; i++) {
        cin >> b;
        sum += b; 
    }
    cout << sum << endl;
}
