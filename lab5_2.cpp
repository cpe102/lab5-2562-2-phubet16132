#include<iostream>
#include<string>
using namespace std;

string mixText(string text1 ,string text2){
	
	int s1 =text1.size();
	int s2 =text2.size();
	
	int i=0;
	string sum;
	if(s1==s2){
		while (i<s1){
			sum=sum+text1[i]+text2[i];
			i+=1;
		}
		
		
		return sum ;
	}
	else
	{
	
		
		return "E";
	}
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
