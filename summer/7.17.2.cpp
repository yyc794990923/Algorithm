/*************************************************************************
	> File Name: 2.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 11时26分21秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, i;
    int a, b, c;
    vector<int> sum;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        c = a+b;
        sum.push_back(c);
    }
    for (auto x: sum)
        cout << x << endl;
    return 0;
}
