#include "C:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	cout << "Please enter name of recipient.\n";

	string recipient;
	cin >> recipient;

	cout << "Dear " << recipient << ",\n" <<
		"\tHow are things on your side? The weather is starting to get colder here.\n" <<
		"We're starting to see the first snows from our position on the mountains.\n";

	cout << "Enter the name of a friend.\n";
	string friend_name;
	cin >> friend_name;

	cout << "Have you heard from " << friend_name << "?\n" <<
		"I heard he's doing quite well nowadays.\n";

	char friend_sex = 0;
	cout << "What is the recipient's sex? m/f";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << ", please ask him to call me.\n";

	if (friend_sex == 'f')
		cout << "If you see " << friend_name << ", please ask her to call me.\n";

	cout << "Please enter the recipient's age, in years.\n";
	int age;
	cin >> age;

	if ((age <= 0) || (age >= 110))
		simple_error("you're kidding!");

	if (age < 12)
		cout << "Next year you will be " << age + 1 << " years old.\n";

	if (age == 17)
		cout << "Next year you will be able to vote!\n";

	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n\nJames Pendleton";

}