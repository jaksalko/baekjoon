//
//  main.cpp
//  dp-14501
//
//  Created by 정문경 on 2020/05/05.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> t;
vector<int> p;

void split(string str , char cut)
{
    vector<int> result;
    stringstream ss(str);
    string temp;
    while(getline(ss,temp,cut))
    {
        int integer;
        integer = stoi(temp);
        result.push_back(integer);
    }
    
    
    t.push_back(result[0]);
    p.push_back(result[1]);
    
    
    
    
}


int main(int argc, const char * argv[]) {
    int N;
    int dp[17] = {0,};
    
    string str;
    cin >> N;
    cin.ignore(256,'\n');
    
    for(int i = 0 ; i < N ; i++)
    {
        getline(cin,str);
        split(str, ' ');
        
    }
   
    dp[0] = 0;
    
    
    for(int day = 1 ; day <= N ; day++)
    {
        int newget = 0;
        for(int i = 0 ; i < day ; i++)
        {
            if(t[i] + i <= day)
            {
                newget = dp[i] + p[i];
            }
            else
            {
                newget = dp[i];
            }
            
            dp[day] = max(dp[day] , newget);
            
        }
        //cout << "dp day :" <<day << " dp value : " << dp[day] << endl;
        
    }
    
    cout<<dp[N];
    
    return 0;
}
