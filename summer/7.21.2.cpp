/*************************************************************************
	> File Name: 7.21.2.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月21日 星期五 09时19分49秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int time,flag;
    string text;

    cin >> time;
    cin.get();
    while(time--) {
        flag = 1;

        cin >> text;
        for (int i = 0; i < text.size()/2; i++) {
            if (text[i] != text[text.size()-1-i]) { 
                cout << "no" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1) cout << "yes" << endl;
    }
    return 0;
}

