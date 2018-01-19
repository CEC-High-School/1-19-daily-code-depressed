

//instructions for 1-19
//
//intro: Write a program that asks a user for how old they are, and then repeats that number back to them in an insult.
//
//intermediate: Write a program that prints the numbers 256 down to 32, counting by fours
//
//advanced: make an account at HackerRank.com
//do this problem: https://www.hackerrank.com/challenges/c-tutorial-struct/problem

//CODE IS HERE//
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();

	return 0;
}

