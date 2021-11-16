#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

//Поиск одинакового ключа
bool isEqual(std::map<int, std::vector<std::string>>& routes, std::vector<std::string>& vec) {

	bool res = false;

	for (auto i : routes) {
		if (i.second == vec) {
			res = true;
		}
	}
	return res;
}

//Поиск и возврат значение одинакого ключа
int isFound(std::map<int, std::vector<std::string>>& routes, std::vector<std::string>& vec) {

	int res = 0;

	for (auto i : routes) {
		if (i.second == vec) {
			res = i.first;
		}
	}
	return res;
}


int main()
{

	std::map<int, std::vector<std::string>> routes;
	
	int q = 0;
	int n = 1;
	std::cin >> q;

	for (int i = 0; i < q; i++) {

		int stops = 0;
		std::cin >> stops;
		std::vector<std::string> vec;

		for (int k = 0; k < stops; k++) {
			std::string str;
			std::cin >> str;
			vec.push_back(str);
		}
		//Если не существует номера
		if (!isEqual(routes,vec)) {
			for (auto z : vec) {
				routes[n].push_back(z);
			}
			int value = routes.size();
			std::cout << "New bus "<< value << std::endl;
			n++;
		}
		else {
			std::cout << "Already exists for " << isFound(routes, vec ) << std::endl;
		}

	}

	return 0;
}




