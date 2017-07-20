/*************************************************************************
	> File Name: 7.20.1.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月20日 星期四 09时21分54秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int count;
    int g,s,b;
    int m,n;
    vector<int> number;
    while (cin >> m >> n) {
        count = 0;
        number.clear();
        if (m < 100 || n > 999 || n < m) {
            continue;
        }
        for (int i = m; i <= n; i++) {
            b = i/100;
            s = (i/10)%10;
            g = (i%100)%10;
            if (b*b*b+s*s*s+g*g*g == i) {
                number.push_back(i);
                count++;
            }
        }
        if (count == 0) {
            cout << "no" << endl;
        }
        else {
            for (int i = 0; i < number.size()-1; i++) {
                cout << number[i] << " ";
            }
            cout << number[(number.size()-1)] << endl;
        }
    }
    return 0;
}
