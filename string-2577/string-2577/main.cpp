//
//  main.cpp
//  string-2577
//
//  Created by 정문경 on 2020/09/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    long a,b,c;
    int arr[10] ={0,};
    
    cin >> a >> b >> c;
    a = a * b * c;
    while (a != 0) {
        long num = a % 10 ;
        //cout << num;
        arr[num]++;
        
        a = a / 10;
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
