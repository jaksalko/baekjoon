//
//  main.cpp
//  math-1475
//
//  Created by 정문경 on 2020/04/30.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(int argc, const char * argv[]) {
    string n;
    
    vector<int> number;
    int needs = 0;
    cin >> n;
    
    for(int i = 0 ; i < n.size() ;  i++)
    {
        number.push_back(n[i]-'0');
    }
    
    while (number.size() != 0) {
        int target = number.front();
        int count = 0;
        
        
            
        
        for(int i = 0 ; i < number.size() ; i++)
        {
            if(target != 6 && target != 9)
            {
                if(number[i] == target)
                {
                    count++;
                    
                    
                }
            }
            else
            {
                if(number[i] == 6 || number[i] == 9)
                {
                    count++;
                    
                    
                }
            }
            
        }
        if(target == 6 || target == 9)
        {
            number.erase(std::remove(number.begin(), number.end(), 6), number.end());
            number.erase(std::remove(number.begin(), number.end(), 9), number.end());
            count = ceil((float)count/2);
            //cout<< "taget 6 or 9 : "<<count << endl;
        }
        else
        {
            number.erase(std::remove(number.begin(), number.end(), target), number.end());
        }
        
        
        
       
        
        needs = max(needs , count);
    }
    
    cout << needs;
    
    return 0;
}
