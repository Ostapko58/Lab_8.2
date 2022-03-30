#include<iostream>
#include<string>
using namespace std;

string Del(string & str)
{
	size_t len = str.length();
	size_t start = 0, finish = len;
	int pos = str.find(' ', start);
	if (pos==-1)
	{
		return str;
	}
	start = pos;
	int pos2 = str.find_first_not_of(' ', start);
	str.erase(pos, pos2 - pos);
	pos2 = str.rfind(' ', finish);
	finish = pos2;
	pos = str.find_last_not_of(' ', finish);
	str.erase(pos+1, pos2 - pos);
	start = 0;
	while (str.find(' ',start)!=-1)
	{
		pos = str.find(' ', start);
		pos2 = str.find_first_not_of(' ', pos);
		str.replace(pos, pos2 - pos, 1, ' ');

		start = pos + 1;
	}
	return str;

}


int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << Del(str) << endl;
	return 0;
}