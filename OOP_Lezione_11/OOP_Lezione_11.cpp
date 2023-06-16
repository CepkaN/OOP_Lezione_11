#include<iostream>
#include<string>
#include<vector>



void Fo(char* s) {  // мои кочевряния
	//int h = 0;
	//for (int i = 0; s[i] != ' '; i++) {
	//	h++;
	//	if (s[i] = ' ') {
	//		s[i] = '\0';
	//	}
	//}
	//char* d1 = new char[h];
	//
	//for (int i = 0; i < h; i++) {
	//	*(d1 + i) = *(s + i);
	//}
	//s = d1;
	
	s += strlen(s) - 1;  // ставим указатель в конец.
	while (*s == ' ') {
		*s = 0;
		s--;
	}
}
void Foo(int* massiv, int size, int index) {
	index--;
	int* newMassiv{ new int[size - 1] };
	for (int i = 0; i < index; i++) {
		newMassiv[i] = massiv[i];
	}
	for (int i = index; i < size - 1; i++) {
		newMassiv[i] = massiv[i + 1];
	}
	for (int i = 0; i < size - 1; i++) {
		std::cout << newMassiv[i];
	}
}

void Foo1(std::vector<int>& v, int x) {
	for (int index = 0; index < v.size();index++) {
		for (int index1 = index + 1; index1 < v.size(); index1++) {
			if (v.at(index) + v.at(index1) == x) {
				std::cout << index << '\n';
				std::cout << index1 << '\n';
			}
		}
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	
	// Удаление пробелов в конце.

	std::string s = "HELL     ";
	char* d = &s[0];
	Fo(d);
	std::cout << d << "____\n\n";

	// Удаление элемента.

	int size = 7;
	int index = 3;
	int* array{ new int[size] {1,2,3,4,5,6,7} };
	Foo(array, size, index);
	std::cout << "\n\n";
	std::vector<int>v{ 1,2,3,4 };
	const int x = 7;
	Foo1(v, x);
	return 0;
}