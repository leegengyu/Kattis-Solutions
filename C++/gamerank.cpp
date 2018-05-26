#include <iostream>
using namespace std;

int main() {
	int star = 0, chain = 0, rank = 25;
	string s;
	
	cin >> s;
		
	for(auto i : s) {
		if(i == 'W') {
			star++, chain++;
			
			if(rank >= 6 && rank <= 25 && chain >= 3)
				star++;
	
			if(rank <= 10 && star > 5) // rank <= 0 == Legend
				rank--, star -= 5;
			else if(rank >= 11 && rank <= 15 && star > 4)
				rank--, star -= 4;
			else if(rank >= 16 && rank <= 20 && star > 3)
				rank--, star -= 3;
			else if(rank >= 21 && rank <= 25 && star > 2)
				rank--, star -= 2; // % not used because if star == 4, WA
		}
		
		else { // i == 'L'
			chain = 0;
		
			if(rank >= 1 && rank <= 20) {
				star--;
				
				if(star < 0) {
					if(rank == 20)
						star = 0;
					else { // rank <= 19
						rank++;
					
						if(rank <= 10)
							star = 4;
						else if(rank <= 15)
							star = 3;
						else if(rank <= 20)
							star = 2;
						else // rank <= 25
							star = 1;
					}
				}
			}
		}
	}
	
	if(rank >= 1)
		cout << rank << '\n';
	else
		cout << "Legend" << '\n';
}