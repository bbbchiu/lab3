#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n,sum=0;
	ifstream in("file.in",ios::in);

	in>>n;
	vector<int> arr(n);
	while(in>>n){
		arr.push_back(n);
	}
	
	sort(arr.begin(),arr.end());
	for(n=1;n<=5;++n){
		sum+=*(arr.end()-n);
	}

	cout<<sum<<endl;

	return 0;
}
