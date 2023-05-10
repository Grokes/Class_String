#pragma once
#include <iostream>
#define MAXLEN 256
class String
{
private:
	char* str;
	unsigned int size{};
	static int count;

public:
	String() :String(80) {}
	String(const unsigned int& size) :str{ new char[size] {} }, size{ size } { ++count; }
	String(const char* const arg_str);
	String(const String& copy) : String(copy.size)
	{
		for (int i{}; i < size; ++i) this->str[i] = copy.str[i];
	}

	~String() { delete[] str; }

public:
	friend std::ostream& operator<< (std::ostream& out, const String& string);
	friend std::istream& operator>> (std::istream& input, String& string);
	static int GetCount() { return count; }
	unsigned int GetSize() { return size; }

private:
	void CopyStr(const char* const arg_str);

};
