//convert decimal to binary
//================================
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int x;
    cout << "enter your decimal number:" ;
    cin >> x;
    vector <int> z;
    while(x/2>=1){
        if(x%2==1){
            z.push_back(1);
            x= (x-1)/2;
            cout << "here is the x value : " << x << endl;
        }else if(x%2==0){
            z.push_back(0);
            x = x/2;
            cout << "here is the x value : " << x << endl;
        }
    }
    
    if(x ==0){
        z.push_back(0);
    }else if(x==1){
        z.push_back(1);
    }
    reverse(z.begin(), z.end());
    //showing the number
    for(int a:z){
        cout<< a;
    }
    return 0;
}

// =======================================================================
//========================================================================
/*
CHECK IF A NUMBER IS PRIME OR NOT------
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter the number: " << endl;
    cin >> x;
    if(x ==1){
        cout << "one is neither a prime number nor a composite number";
    }else if(x ==2){
        cout << "2 is a prime number";
    }else if(x > 2){
        for(int i=2; i < x; i++){
            if(x%i ==0){
                cout << x << " is not a prime number";
                break;
            }else if(i+1==x){
                cout << x << " is a prime number";
            }
        }
        
    }
    return 0;
    
}


// =======================================================================
//========================================================================
