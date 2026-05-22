#include <iostream>
#include <string>
using namespace std;

//void main()
//{
//	string s = "Hello,World!";
//
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
//
//	s.clear();
//	cout << s.empty() << endl;
//}

//void main()
//{
//	string s = "Hello, World!";
//	cout << s.substr(7, 5) << endl;
//
//	s.append(" :)");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//	printf("%s", s.c_str());
//}

//void main()
//{
//	string s = "Hello!";
//	cout << s[0] << endl;
//	cout << s.at(1) << endl;
//	cout << s.front() << endl;
//	cout << s.back() << endl;
//}

//void main()
//{
//	string s = "example string";
//	char search = 'e';
//	int at = s.find(search, 0);
//	cout << "'e' is at" << at << " " << endl;
//	cout << s.rfind("e") << endl;
//	if (s.rfind("xyz") == string::npos)
//		cout << "¾øÀ½" << endl;
//}

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
//	string s = "Hello, World!";
//	s.replace(7, 5, "C++");
//	cout << s << endl;
//	cout << s << endl;
//}

//void main()
//{
//	string s = "apple";
//	cout << s.compare("apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//}

//void main()
//{
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << t << endl;
//}

void main()
{
	string s = "apple, banana, cherry";
	string delim = ",";
	size_t pos = 0;
	while ((pos = s.find(delim))
		!= string::npos)
	{
		cout << s.substr(0, pos) << " ";
		s.erase(0, pos + delim.length());
	}
}