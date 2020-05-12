//
//  main.cpp
//  string-1120
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    string b;
    cin >> a;
    cin >> b;
    int mn = 999;
  
    long dif = b.length() - a.length();
    
    for(int i = 0 ; i <= dif ; i++)
    {
        int temp = 0;
        for(int j = 0 ; j < a.size() ; j++)
        {
            if(a[j] != b[j+i])
                temp++;
        }
        mn = min(mn ,temp);
        
    }
    cout << mn;
   
    return 0;
}
