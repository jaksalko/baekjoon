//
//  main.cpp
//  string-1032
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> v;
    int n;
    int length = 0 ;
    cin >> n;
    vector<char> pt;
    for(int i = 0 ; i < n ; i++)
    {
        string s;
        cin >> s;
        length = s.length();
        v.push_back(s);
    }
    for(int  i = 0 ; i < length ; i++)
    {
        bool same = true;
        char c = v[0][i];
        for(int  j = 0 ; j < v.size() ; j++)
        {
            char cc = v[j][i];
            if(cc != c)
            {
                same = false;
                break;
            }
                
        }
        if(same)
        {
            pt.push_back(c);
        }
        else
        {
            pt.push_back('?');
        }
        
    }
    for(int  i = 0 ; i < pt.size() ; i++)
    {
        cout << pt[i];
    }
    return 0;
}
