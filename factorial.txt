#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long exampleFunction(int x)
    {
    long long z=1;
    for (int i = 1; i <= x; ++i) {
        
      z*=  i;
    }
return z;
        
    }

int main() {
    auto start = high_resolution_clock::now();
   long long z = exampleFunction(17);
    auto end = high_resolution_clock::now();
    auto executionTime = duration_cast<duration<double, milli>>(end - start);
    cout<<z<<endl;
    cout << "Execution time: " << executionTime.count() << " milliseconds" << endl;
    return 0;
}  

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long fact(int x)
    {
    
    if(x==1)
        return 1;
        else 
        return x*fact(x-1);
      
    
        
    }

int main() {
    auto start = high_resolution_clock::now();
long long z=fact(15);
    auto end = high_resolution_clock::now();
    auto executionTime = duration_cast<duration<double, milli>>(end - start);
    cout<<z<<endl;
    cout << "Execution time: " << executionTime.count() << " milliseconds" << endl;
    return 0;
}