/*************************************************************************
	> File Name: float.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年06月04日 星期日 18时38分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    if (((a-b) > (1e-8)) || ((b-a) > (1e-8))) {
        cout << "no" << endl;
        return 0;
    }
    else {
        cout << "yes" << endl;
    }
    return 0;
}
