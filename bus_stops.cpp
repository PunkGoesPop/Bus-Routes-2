#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main() {

	map<set<string>, int> mp;

	int q = 0;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int stop_count = 0;
		cin >> stop_count;

		set<string> st;

		for (int k = 0; k < stop_count; k++)
		{
			string str;
			cin >> str;
			st.insert(str);
		}
		//Проверка на существование маршрута
		if (mp.count(st) == 0)
		{
			const int new_number = mp.size() + 1;
			mp[st] = new_number;
			cout << "New bus " << new_number << endl;
		}
		else
		{
			cout << "Already exists for " << mp[st] << endl;
		}

	}
}