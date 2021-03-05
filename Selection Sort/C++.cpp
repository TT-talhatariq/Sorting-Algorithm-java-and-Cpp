/*Selection Sort divides the input list into two parts
1) Sorted Part
2) Un-Sorted Part
We'll make find largest (or smallest , depeding upon sorting order), and place it in it's position in Sorted Part
. We'll did this untill the whole list is sorted

Time Complexity: O(n^2)
 Space Complexity: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;
//Selection Sort Code + print Funtion
vector<int> Selection_Sort(vector<int>list);
void print_list(vector<int>list);

int main(){
	int array [10] = {2,8,6,5,3,9,1,7,19,15};
	vector <int> list(array, array+10);
	cout << "Befor Sorting: \n";
	print_list(list);
	cout << endl << endl;
	print_list(Selection_Sort(list));
	return 0;
}

void print_list(vector<int>list){
	for(int i=0; i<list.size(); i++){
		cout << list[i] << " ";
	}
}
vector<int> Selection_Sort(vector<int>list){
	
	//N Times loop
	for(int i=0; i<list.size(); i++){
		int min_index = i;
		
		//Loop for Makinf Comparison
		for(int j=1; j<list.size(); j++ ){
			if(list[j] <list[i])
				min_index = j;
		}
			int temp = list[min_index];
			list[min_index] = list[i];
			list[i] = temp;
	}
	return list;
	
}

