/*************************************************************************
	> File Name: 12.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月19日 星期三 14时53分22秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int common_divisor(int a,int b);

int main()
{
    int a,b,i;
    int n,number;
    vector<int> value;
    while(cin >> n) {
        a = b = 0;
        value.clear();
        for (i = 0; i < n; i++) {
            cin >> number;
            value.push_back(number);
        }
        for (i = 0; i < n-1; i++) {
            a = common_divisor(value[i],value[i+1]);
            b = value[i]/a * value[i+1];
            value[i+1] = b;
        }
        cout << value[n-1] << endl;
    }
    return 0;
}

int common_divisor(int a,int b) 
{
    int m,n,r;
    if (a > b) {
        m = a;
        n = b;
    }
    else {
        m = b;
        n = a;
    }
    r = m%n;
    while (r != 0) {
        m = n;
        n = r;
        r = m%n;
    }
    return n;
}
