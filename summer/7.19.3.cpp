/*************************************************************************
	> File Name: 7.19.3.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年07月19日 星期三 16时18分58秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int time,count;
    string text,b;

    cin >> time;
    getline(cin, b);
    while (time--) {
        count = 0;
        getline(cin, text);
        for (int i = 0; i < text.size(); i++) {
            if (((int)text[i] && 0x80) > 0) {
                i = i+1;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
