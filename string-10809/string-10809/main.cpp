//
//  main.cpp
//  string-10809
//
//  Created by 정문경 on 2020/05/11.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string s;
    cin >> s;
    int arr[26];//알파벳 갯수
    
    for(int i = 0 ; i < 26 ; i++)
    {
        arr[i] = -1;
        
    }
    for(int i = 0 ; i < s.length() ; i++)
    {
        int alphabet = (int)s[i]-97;
        if(arr[alphabet] == -1)
        {
            arr[alphabet] = i;
        }
    }
    
    for(int i = 0 ; i < 26 ; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
