//
//  main.cpp
//  string-1316
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;

void checker(string s)
{
    int next_index = 0;
    
    char c;
    
    while(next_index != s.size())
    {
        c = s[next_index];
        while(c == s[next_index])
        {
            next_index++;
        }
        for(int j = next_index ; j < s.size() ; j++)
        {
            if(c == s[j])
            {
                N--;
                return;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    cin >> N;
    
    vector<string> s;
    
    for(int i = 0 ; i < N ; i++)
    {
        string ss;
        
        cin >> ss;
        s.push_back(ss);
    }
    
    for(int i = 0 ; i< s.size() ; i++)
    {
        checker(s[i]);
    }
    
    cout << N;
    
    
    return 0;
}
