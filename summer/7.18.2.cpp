/*************************************************************************
	> File Name: 10.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月18日 星期二 10时54分30秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int sum, i,j, sum1,flag = 0;
    string mail;
    while(getline(cin,mail)) {  
        sum = 0;
        sum1 = 0;
        i = j = 0;
        flag = 0;
        if (mail[0]== '@' || mail[0]== '.' || mail[mail.size()-1]== '@' || mail[mail.size()-1] == '.') { 
            cout << "NO" << endl;
            continue;
        }
        
        for (i = 1; i < mail.size()-1; i++) {
            if (mail[i] == '@') {
                sum++;
                j = i;
            }
            if (mail[i] == '@' &&( mail[i+1] == '.'|| mail[i-1] == '.')) {
                flag = 1;
                break;
            }
        }
        for (i = j; i < mail.size()-1; i++) {
            if (mail[i] == '.') {
                sum1++;
            }
        }
        if (sum1 == 0||sum!=1||flag==1) {
            cout << "NO" << endl;
            continue;
        }
        else cout << "YES" << endl;
    }
}
