#include <iostream>
using namespace std;

int main(void) {
	int i, temp, capacity, booked, room[101] = {0};
	
	cin >> capacity >> booked;
	
	for(i = 0; i < booked; i++) {
		cin >> temp;
		room[--temp] = 1;
	}
	
	if(capacity == booked)
		cout << "too late" << endl;
	
	else
		for(i = 0; i < capacity; i++)
			if(room[i] == 0) {
				cout << i + 1 << endl;
				break;
			}
	
	return 0;
}