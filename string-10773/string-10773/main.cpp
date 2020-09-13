//
//  main.cpp
//  string-10773
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
  
    int n;
    vector<int> cash;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        if(temp != 0)
        {
            cash.push_back(temp);
        }
        else
        {
            cash.pop_back();
        }
    }
    n = 0;
    for(int i = 0 ; i < cash.size() ; i++)
    {
        n += cash[i];
    }
    
    cout << n;
    return 0;
}
