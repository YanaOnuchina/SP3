#include <Windows.h>
#include <iostream>
#include <vector>
#include <tlhelp32.h>

int main()
{
    DWORD pid = GetCurrentProcessId();
	char testStr[] = "Human";
	
	std::cout << testStr << std::endl;
	std::cout << pid << std::endl;
	int a;
	std::cin >> a;

	std::cout << "Result: " << testStr << std::endl;
	system("pause");
}