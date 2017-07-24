/*************************************************************************
	> File Name: 7.24.1.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月24日 星期一 12时41分59秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int f[256];
int main(){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
            f[s[i]]++;
        int ans;
        ans=min(f['B'],min(f['u']/2,min(f['l'],min(f['b'],min(f['a']/2,min(f['s'],f['r']))))));
        cout<<ans;
}
