#include <iostream>
#include <string>
using namespace std;

//void main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//
//	s.insert(5, "??");
//	cout << s << endl;
//}

//void main()
//{
//	string s = "apple,banana,cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos = s.find(delim)) != string::npos) {
//		cout << s.substr(0, pos) << " ";
//		s.erase(0, pos + delim.length());
//	}
//}

#include <math.h>

//void main()
//{
//	string s = "FF1E";
//	//cin >> s;
//	size_t len = s.length();
//	int result = 0;
//	for (int i = 0; i < len; i++) {
//		int num=0;
//		if (s[i] >= 65 && s[i] <= 70)
//			num = s[i] - 'A' + 10;
//		else if (s[i] >= '0' && s[i] <= '9')
//			num = s[i] - '0';
//		
//		result += num * pow(16, len - i - 1);
//	}
//	cout << result << endl;
//}

//void main()
//{
//	string s = "This is a sample string";
//	s.replace(10, 6, "useful");
//	cout << s << endl;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6

void printenergy(int my)
{
	cout<<"내 목숨 : ";
	for (int i=0;i<my;i++)
		cout<<"■";
	for (int i = my; i < MAXENERGY; i++)
		cout<<"□";
	cout<<endl;
}
int main()
{
	srand((unsigned int)time(NULL));
	string num = "___";
	string tmp(5, '_');
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (!energy) {
			cout<<"게임 오버..."<<endl;
			cout<<"정답 : "<< tmp;
			break;
		}
		cout<<"정답 : "<< num<<endl;
		if (atoi(num) == answer) {
			cout << "게임 승리!" << endl;
			break;
		}
		cout<<"숫자를 맞춰보세요 : ";
		cin>>input;

		bool check = true;
		for (int i = 0; i < 3; i++) {
			if (tmp[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check)
			energy--;
	}
	return 0;
}