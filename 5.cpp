/*************************************************************************
	> File Name: 5.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 14时42分37秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,j,number;
    int a,b;
    vector<int> sum;
    cin >> j;
    while(j--) {
        a = b = 0;
        cin >> number;
        for (i = 0; i < number; i++) {
            cin >> a;
            b += a;
        }
        sum.push_back(b);
    }
    for (auto x: sum) 
        cout << x << endl;
    return 0;

}
