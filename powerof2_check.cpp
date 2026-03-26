
#include <iostream>
using namespace std ; 

int main()
{
    
    int n ;
    cout<< "Enter N : " ; 
    cin >> n ; 

    if (n > 0 && (n & (n-1)) == 0 ) {
        cout<< "The N is power of 2 ! " ;
    }
    else {
        cout<< "N is not a power of 2 " ; 
    }
    return 0;
} 
