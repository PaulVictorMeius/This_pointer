#pragma once
#include <iostream>
class A
{
public:
	explicit A(int m) :m{ m } {}
	void set_m(int m) { this->m = m; }
	auto get_m()const { return m; }
	void print_m()const { std::cout << "m=" << m << '\n'; }
private:
	int m;
};

