/*************************************************************************
	> File Name: 7.22.3.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月22日 星期六 10时15分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int count, v0, v1, a, l;
    int n = 1, s = 0, sum = 0;

    cin >> count >> v0 >> v1 >> a >> l;
    if (count >=1 && count <= 1000 && l >= 0 &&l <= v0 && v0 >= l && v0 <= 1000 && a >= 0 && a <= 1000) {
        while(1) {
        
            s = v0+(n-1)*a;
            
            if (s>v1) s = v1;
            if (n != 1)
                s = s-l;
            sum += s;
            if (sum >= count) {
                cout << n << endl;
                break;
            }
            else n++;
        }
    }
    return 0;
}
