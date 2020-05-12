//
//  main.cpp
//  string-2864
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    string b;
    cin >> a;
    cin >> b;
    
    int max,min;
    
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] == '5')
            a[i] = '6';
        
    }
    for(int j = 0 ; j < b.length() ; j++)
    {
        if(b[j] == '5')
            b[j] = '6';
    }
    
    int amax = stoi(a);
    int bmax = stoi(b);
    
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] == '6')
            a[i] = '5';
        
    }
    for(int j = 0 ; j < b.length() ; j++)
    {
        if(b[j] == '6')
            b[j] = '5';
    }
    int amin = stoi(a);
    int bmin = stoi(b);
    max = amax + bmax;
    min = amin + bmin;
    cout << min << " " << max;
    return 0;
}
