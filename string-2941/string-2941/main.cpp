//
//  main.cpp
//  string-2941
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0 ;
    string s;
    
    cin >> s;
    int i = 0;
    while(i < s.size())
    {
        n++;
        if(s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-'))
        {
            i += 2;
        }
        else if(s[i] == 'd' &&  s[i+1] == '-')
        {
            i += 2;
            
        }
        else if(s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=')
        {
            i += 3;
        }
        else if(s[i] == 'l' && s[i+1] == 'j')
        {
            i += 2;
        }
        else if(s[i] == 'n' && s[i+1] == 'j')
        {
            i += 2;
        }
        else if(s[i] == 's' && s[i+1] == '=')
        {
            i += 2;
        }
        else if(s[i] == 'z' && s[i+1] == '=')
        {
            i += 2;
        }
        else
        {
            i += 1;
        }
        
    }
    
    cout << n;
    return 0;
}
