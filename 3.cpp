/*************************************************************************
	> File Name: 3.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 11时37分29秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a,b,c;
    vector<int> sum;
    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        else {
            c = a+b;
            sum.push_back(c);
        }
    }
    for (auto x: sum) 
        cout << x << endl;
    return 0;
}



