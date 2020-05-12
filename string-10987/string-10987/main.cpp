//
//  main.cpp
//  string-10987
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
char arr[5] = {'a','e','i','o','u'};

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int count = 0;
    for(int  i = 0 ; i < s.length() ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(arr[j] == s[i])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}
