/*************************************************************************
	> File Name: 9.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月18日 星期二 09时51分44秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;


int main()
{
    int i;
    double a = 0;
    double number,time;
    vector<int> score;
    vector<double> sum;
    while (cin >> time) {
        for (i = 0; i < time; i++) {
            cin >> number;
            score.push_back(number);
        }
        sort(score.begin(), score.end());
        for (i = 1; i < time -1; i++) {
            a += score[i];
        }
        a = a/(time-2);
        sum.push_back(a);

        a = 0;
        score.clear();
    }
    for (auto x: sum) {
        cout << fixed << setprecision(2) << x << endl;
    }
}
