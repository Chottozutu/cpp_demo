#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "コンストラクタ呼ばれた\n"; }
	~MyClass() { std::cout << "デストラクタ呼ばれた\n"; }
};

int main() {
	{
		MyClass obj; // スコープを抜けると自動で破棄
	}
	std::cout << "スコープ終了後\n";
}