//
//  MagicSquare_Odd.cpp
//  Project_2_MagicSquare_odd
//
//  Created by Efrain A. Magallon on 9/24/14.
//  Copyright (c) 2014 Efrain A. Magallon. All rights reserved.
// Red ID 814172067

#include <iostream>

#include <iomanip>

#include <string>

using namespace std;

void compute(int );


int main()


{
    
    int x;
    cout<<"Enter the odd number:"; // if number is odd show the magic square
    cin>>x;// Represent the number that is going to be assing to the magic square
    
    if (x%2==0||x<=1)// Reads the statemen whether the number is odd or even
        
    {
        cout<<"Error: Not an odd number...\n"; // show error if number is even
    }
    
    
    
    while(x%2==0||x<=1)// loop starting
        
        
    {cout<<"Enter the odd number:";//Enter numbers
        cin>>x;// input
        
        
    }
    compute(x);
    system(0);
    return 0;
}

void compute(int x)


{
    int i,j,string;
    cout<<"Magic Square is...\n";// prints the function
    for(i=1;i<=x;i++)
        
    {
        for(j=1;j<=x;j++)
            
        {
            string=x*((i+j-1+(x/2))%x)+(i+(2*j)-2)%x+1;
            cout<<setw(4)<<string;// used setw to format my ouput
            
        }
        
        cout<<endl<<endl;
        
    }
    
    cout<<"Thank you for using Magic Square, bye bye\n";
    
    
    
    
    
    
    
    
    
    
    
    
}

