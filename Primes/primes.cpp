#include<iostream>
using namespace std;

int main(){
	long long primes = 0;
    for(long long i = 2; primes < 200000; i++){
        bool prime = true;
        for(long long j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
	        primes++;
	        cout << i << endl;	
        }
    }
    return 0;
}
