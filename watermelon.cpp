#include <bits/stdc++.h>
#include <iostream>
#include <time.h>

void sleep(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds);
}

int main() {
	int w;
	std::cout << ""; std::cin >> w;
	if (w % 2 == 0) { // checks if int w is even or odd!
		std::cout << "YES";
		sleep(1);
	} else {
		std::cout << "NO";
		sleep(1);
	}
	system("cls");
	return main();
}
