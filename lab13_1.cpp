#include <iostream>
#include <ctime>
using namespace std;

long long fibonacci(long long int x);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long fibonacci(long long int x){
    if(x>1){
        return fibonacci(x-1) + fibonacci(x-2);
    }else if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }

return 0;
}
