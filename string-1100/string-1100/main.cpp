//
//  main.cpp
//  string-1100
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
//char arr[8][8];
int main(int argc, const char * argv[]) {
    int n = 0;
    for(int i = 0 ; i < 8 ; i++)
    {
        string s;
        cin >> s;
        for(int j = 0 ; j < s.length() ; j++)
        {
            //arr[i][j] = s[j];
            if((i+j) % 2 == 0 && s[j] == 'F')
            {
                n++;
            }
        }
    }
    cout << n;
    
    return 0;
}
