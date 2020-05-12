//
//  main.cpp
//  greedy-1541
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    vector<string> v;
    int next = 0;
    int sum = 0 ;
    string sub;
    int index = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '+')
        {
            
            sub = s.substr(next,index);
            sum += stoi(sub);
            next = i+1;
            index = 0;
        }
        else if(s[i] == '-')
        {
            sub = s.substr(next,index);
            sum += stoi(sub);
            next = i+1;
            index = 0;
            break;
        }
        else
        {
            index++;
        }
        if(i == s.size()-1)
        {
            sub = s.substr(next,index);
            sum += stoi(sub);
            next = i+1;
            
        }
    }
    for(int i = next ; i < s.size() ; i++)
    {
        if(s[i] == '-' || s[i] == '+')
        {
            sub = s.substr(next,index);
            sum -= stoi(sub);
            next = i+1;
            index = 0;
        }
        else
        {
            index++;
        }
        if(i == s.size()-1)
        {
            sub = s.substr(next,index);
            sum -= stoi(sub);
            
            
        }
    }
    
    cout << sum;
    return 0;
}
