/*************************************************************************
	> File Name: a+b.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月23日 星期二 15时04分08秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a > (pow(2,31) -1) )
    {   
        cout << "aerror" << endl;
        return -1;
    }
    if(b > (pow(2,31) -1) )
    {
        cout << "berror" << endl;
        return -1;
    }
    cout << a+b << endl;
    return 0;
}
