#include <iostream>
#include <random>

using namespace std;

int main(){
	int heads = 0;
	int tails = 0;
	bool choice = 0;

	random_device rd;
    mt19937 gen(rd());
    bernoulli_distribution d(0.5);

	for(int i = 0; i < 100; i++){
		
		do{
			choice = d(gen);
			if(choice == 0) heads++;
			if(choice == 1) tails++;
		}while(tails >= heads);
		// cout << "Heads: " << heads << " Tails: " << tails 
		cout << " Total: " << heads + tails << endl;
		tails = 0;
		heads = 0;	

	}


	return 0;
}