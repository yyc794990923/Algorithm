/*************************************************************************
	> File Name: 11.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月18日 星期二 12时19分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()  
{  
    int n,m;  
    while (cin >> n >> m)  
    {  
        int i,count = 0,tmp = 0,sum = 0;  
        for (i=1;i<=n;i++)  
        {  
            count++; 
            tmp += 2;
            sum += tmp;  
            if (i == n)
            {  
                cout << sum/count << endl;
            } 
            else if (count == m)  
            {  
                cout << sum/m << " ";
                count = 0; sum =0;  
            }  
        }  
    }  
    return 0;  
}
