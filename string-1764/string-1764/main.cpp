//
//  main.cpp
//  string-1764
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
    int d;
    int b;
    vector<string> dv;
    vector<string> bv;
    
    cin >> d >> b;
    
    dv.resize(d);
    for(int i = 0 ; i < d; i ++)
    {
        
        cin >> dv[i];
        
    }
    sort(dv.begin(),dv.end());
    string s;
    for(int  i = 0 ; i < b ; i++)
    {
        
        cin >> s;
        
            if(binary_search(dv.begin(), dv.end(), s))
            {
                bv.push_back(s);
                
            }
        
        
    }
    cout << bv.size() << endl;
    sort(bv.begin(), bv.end());
    for(int  i = 0 ; i < bv.size() ; i++)
    {
        cout << bv[i] << endl;
    }
    
    
    return 0;
}
