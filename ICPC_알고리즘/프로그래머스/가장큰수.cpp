#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

vector<int> arr;

string solution(vector<int> numbers) {
	string answer = "";
	vector<vector<int> > narr(1010,vector<int>(100010,-1));
	string tmp="";

	for(int i=0;i<numbers.size();i++){
	
		tmp=to_string(numbers[i]);
		
		for(int j=0;j<tmp.size();j++){
			cout<<"tmp : "<<tmp[j]-48<<'\n';
			narr[i][j]=tmp[j]-48;
			cout<<narr[i][j]<<'\n';
		}	
	}


	
/*










;
	
	int sav;
	int temp;
	string tmp;

	for (int i = 0; i < numbers.size(); i++)
	{
		tmp=to_string(numbers[i]);
		sav=tmp.size();

		for (int j = 0; j < 4-sav; j++) {
			tmp += tmp[0];
		}
		narr.push_back(atoi(tmp.c_str()));

	}
	for (int i = 0; i <numbers.size()-1; i++) {
		for (int j = i+1; j < numbers.size(); j++) {
			if (narr[i] < narr[j]) {
				temp = narr[i];
				narr[i] = narr[j];
				narr[j] = temp;
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	
	for (int i = 0; i < numbers.size(); i++) {
		answer += to_string(numbers[i]);
	}

*/
	return answer;
}

int main(){
	int a;
	int n;

	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}

	solution(arr);
}


//일단 2차원 배열을 만들어서 수의 자리수를 다 나눠서 저장함
//3
//30
//34
//5
//9
//9534330
//앞자리가 같은거가 있으면 그때부터 비교 시작 같을 때 마다 비교를 함








