//
//  main.cpp
//  100doors
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Problem: You have 100 doors in a row that are all initially closed. You make 100 passes by the doors. 
 The first time through, you visit every door and toggle the door (if the door is closed, you open it; 
 if it is open, you close it). The second time you only visit every 2nd door (door #2, #4, #6, ...). 
 The third time, every 3rd door (door #3, #6, #9, ...), etc, until you only visit the 100th door.
 
 Question: What state are the doors in after the last pass? Which are open, which are closed?
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    bool open_doors[100] = {false};
    for (int j = 0; j < 100; j++)
    {
    for (int i = j; i < 100; i += (j+1))
    {
        open_doors[i] = !open_doors[i];
    }
    }
    for (int i = 0; i < 100; i++)
    {
        if (open_doors[i] == true)
        {
            cout << "door " << i + 1 << " is open" << endl;
        }
    }
    
    return 0;
}
