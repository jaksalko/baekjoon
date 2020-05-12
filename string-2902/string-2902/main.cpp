//
//  main.cpp
//  string-2902
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    
    string s;
    vector<char> c;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        int asc = s[i] - 'A';
        //cout << asc;
        if(asc >= 0 && asc < 26)
        {
            c.push_back(s[i]);
        }
        
    }
    
    for(int i = 0 ; i < c.size() ; i++)
    {
        cout << c[i];
    }
    return 0;
}
