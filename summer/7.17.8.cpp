/*************************************************************************
	> File Name: 8.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月17日 星期一 15时05分13秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i,j,number;
    int a,b;
    vector<int> sum;
    vector<int>::iterator x;
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
    for (x = sum.begin(); x < sum.end()-1; x++) {
        cout << *x << endl;
        cout << endl;
    }
    cout << *(sum.end()-1) << endl;
    return 0;

}
