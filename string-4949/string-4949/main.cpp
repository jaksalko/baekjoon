//
//  main.cpp
//  string-4949
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

char arr[4] = {'(',')','[',']'};// 0,1   2,3
vector<string> result;

string balance(string s)
{
    int small = 0;
    int big = 0;
   
    stack<int> smallopen;
    stack<int> bigopen;
    smallopen.push(-1);
    bigopen.push(-1);
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == arr[0])
        {
            small++;
            smallopen.push(i);
        }
        else if(s[i] == arr[1])
        {
            if(smallopen.top() > bigopen.top())
            {
                small--;
                smallopen.pop();
            }
            else
            {
                return "no";
            }
            
            
        }
        else if(s[i] == arr[2])
        {
            big++;
            bigopen.push(i);
        }
        else if(s[i] == arr[3])
        {
            if(bigopen.top() > smallopen.top())
            {
                big--;
                bigopen.pop();
            }
            else
            {
                return "no";
            }
        }
        
        if(small < 0 || big <0)
        {
            return "no";
        }
        
        
    }
    if(small == 0 && big == 0)
    {
        return "yes";
    }
    else
    {
        return  "no";
    }
}

int main(int argc, const char * argv[]) {
    
    string sub;
    
    while(true)
    {
        string s;
        getline(cin,s);
        if(s.size() == 1 && s[0] == '.')
        {
            break;
        }
        else
        {
            if(s[s.size()-1] != '.')
            {
                sub = sub + s;
            }
            else
            {
                s = sub + s;
                sub = "";
                //get result
                           result.push_back(balance(s));
            }
           
        }
            
    }
    
    for(int i = 0 ; i < result.size() ; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}
