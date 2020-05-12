//
//  main.cpp
//  string-10988
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int n = 1;
    for(int i = 0 ; i < s.size()/2 ; i++)
    {
        if(s[i] != s[s.size()-1-i])
        {
            n = 0;
            break;
        }
    }
    cout << n;
    return 0;
}
