/*************************************************************************
	> File Name: money.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年06月01日 星期四 20时47分49秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, month, residue = 0, sum = 0;
    vector<int> money;
    vector<int> :: iterator i;
    while (cin >> a) {
        money.push_back(a);
    }
    for (i = money.begin(); i != money.end(); i++) {
        if (*i > residue+300) {
            month = i - money.begin();
            cout << -(month +1) << endl;
            return 0;
        }
        else {
            residue += 300 - *i;
            if ((residue/100) > 0) {
                sum += (residue/100) *100;
                residue = residue % 100;
            }
        }
    }
    sum = sum + sum*0.2 + residue;
    cout << sum << endl;
    return 0;

}
