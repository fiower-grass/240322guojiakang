#include <iostream>
using namespace std;
bool function(int x,int j, int list[]) 
{
	for (int i = 0; i < j; i++) 
	{
		if (x == list[i]) 
		{ 
			return false; 
		}	
	}
	return true;
}
int main() {
	int arr[10],unit[10],c=1;
	cout << "Enter ten numbers:" << endl;
	for (int a = 0; a < 10; a++) {
		cin >> arr[a];
		if (a == 0)unit[0]=arr[a];
		else {
			int j =sizeof(unit)/sizeof(unit[0]);
				if (function(arr[a],j, unit)) {
					  unit[c]=arr[a];
					c++;
				}
		}
	}
cout << "The distinct numbers are: " ;
	for (int d = 0; d < c; d++) {
		cout << unit[d]<<" ";
	                             }
         }
