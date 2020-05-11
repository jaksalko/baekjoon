//
//  main.cpp
//  string-1157
//
//  Created by 정문경 on 2020/05/11.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int arr[26] = {0,};
    vector<int> v;
    for(int i = 0 ; i < s.length() ; i++)
    {
        int asc = (int)s[i];
        if( asc < (int)'a' )//대문자
        {
            arr[s[i] - 'A']++;
        }
        else//소문자
        {
            arr[s[i] - 'a']++;
        }
    }
    int mx = *max_element(arr, arr+26);
    //cout << mx << endl;
  
    for(int i = 0 ; i < 26 ; i++)
    {
        if(mx == arr[i])
        {
            v.push_back(i);
        }
            
        
    }
    if(v.size() != 1)
    {
        cout << "?";
    }
    else
    {
        char result = char('A'+ v[0]);
        cout << result;
    }
    return 0;
}
