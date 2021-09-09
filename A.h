#pragma once
#include <iostream>
class A
{
public:
	explicit A(int m) :m{ m } {}
	void set_m(int m) { this->m = m; }
	int get_m()const { return m; }
	void print_m()const { std::cout << "m=" << m << '\n'; }
	A& add(int n) { m += n; return *this; }
	A& sub(int n) { m -= n; return *this; }
private:
	int m;
};

