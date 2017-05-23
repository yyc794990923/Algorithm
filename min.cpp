/*************************************************************************
> File Name: min.cpp
> Author: yanyuchen
> Mail: 794990923@qq.com
> Created Time: 2017年05月23日 星期二 16时01分42秒
************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a, i, b, t, j;
    vector<int> arr;
    cin >> a;
    for (i = 0; i < a; i++) {
        cin >> b;
        arr.push_back(b);
    }
    for (j = 0; j < a-1; j++) { 
        for (i = 0; i < a-j-1; i++) {
            if (arr[i] > arr[i+1]) {
                t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
            }
        }
    }
    cout << arr[0] << ' ' << arr[a-1] << endl;
    return 0;

}


