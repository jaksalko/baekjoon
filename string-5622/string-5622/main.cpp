//
//  main.cpp
//  string-5622
//
//  Created by 정문경 on 2020/05/11.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {
    string s;
    int time = 0 ;
    cin >> s;
    for(int  i = 0 ; i < s.size() ; i++)
    {
        int asc = s[i]-'A';
        
        if(asc < 3)
        {
            time += 1;
        }
        else if(asc < 6)
        {
            time += 2;
        }
        else if(asc < 9)
        {
            time += 3;
        }
        else if(asc < 12)
        {
            time += 4;
        }
        else if(asc < 15)
        {
            time += 5;
        }
        else if(asc < 19)
        {
            time += 6;
        }
        else if(asc < 22)
        {
            time += 7;
        }
        else
        {
            time += 8;
        }
        
        
        
    }
    time += s.size()*2;
    cout << time;
    return 0;
}
