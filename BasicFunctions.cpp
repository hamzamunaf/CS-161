/*********************************************************************
  2 ** Program Filename:Assignment3.cpp
  3 ** Author:Hamza Munaf
  4 ** Date:2/5/18
  5 ** Description:Testing Functions
  6 ** Input:--
  7 ** Output:results
  8 *********************************************************************/

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

/*********************************************************************
** Function: Check range      
** Description:Checks range between numbers
** Parameters:integer Lowerbound, integer upperbound, integer test Values
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/
bool check_range(int lb, int upb, int testvalue) {
	if ((testvalue >= lb) && (testvalue <= upb)) {
		return 1;
	}
	else {
		return 0;
	}

} // done
void check_range() {

	int lb, upb, testvalue;
	bool check;
	{cout << " Testing Values for check range are  Lowerbound:5 upperbound: 20 testvalue: 15 Expected output:'within the precision' actual output: " << endl;
	lb = 5;
	upb = 20;
	testvalue = 15;
	check = check_range(lb, upb, testvalue);
	if (check == 1) {
		cout << "Values are within the precision" << endl;
	}
	else {
		cout << "Values are not within the precision" << endl;
	}}
	{cout << " Testing Values for check range are  Lowerbound:-200 upperbound: -400 testvalue: 300 Expected output:'not within the precision' actual output: " << endl;
	lb = -200;
	upb = -400;
	testvalue = 300;
	check = check_range(lb, upb, testvalue);
	if (check == 1) {
		cout << "Values are within the precision" << endl;
	}
	else {
		cout << "Values are not within the precision" << endl;
	}}
	{cout << " Testing Values for check range are  Lowerbound:500 upperbound:1000 testvalue: 890.99 Expected output:' within the precision' actual output: " << endl;
	lb = 500;
	upb = 1000;
	testvalue = 890.99;
	check = check_range(lb, upb, testvalue);
	if (check == 1) {
		cout << "Values are within the precision" << endl;
	}
	else {
		cout << "Values are not within the precision" << endl;
	}}

} // done

/*********************************************************************
** Function: is int
** Description:Checks for integers
** Parameters:string num
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/
bool is_int(string num) {

	int integer = num.length();

	int num2;
	int x = 0;
	for (int i = 0; i<integer; i++) {
		num2 = char(num[i]);
		if ((num2 >= 48 && num2 <= 57) || ((num2 == 45) || (num2 == 43))) {
			x = x + 1;
		}
	}
	//cout <<"x = "<<x <<" in" <<integer <<endl;

	if (x == integer) {
		//cout<<"true value"<<endl;
		return 1;
	}
	else
	{
		//cout<<"false value"<<endl;
		return 0;
	}
}
void is_int() {
	bool check;
	string num;
	{cout << "Testing values for is int is 800.11  Expected output:  value is not an  int expected output: " << endl;
	num = ("800.11");
	check = is_int(num);
	if (check == 1) {
		cout << "Testing Values " << num << " is True" << endl;
	}
	else {
		cout << "Testing value is false" << endl;
	}

	} {cout << "Testing values for is int is 800  Expected output:  value is an int expected output: " << endl;
	num = ("800");
	check = is_int(num);
	if (check == 1) {
		cout << "Testing Values " << num << " is True" << endl;
	}
	else {
		cout << "Testing value is false" << endl;
	}

	}
	{cout << "Testing values for is int is abc12312  Expected output:  value is not an int expected output: " << endl;
	num = ("abc12312");
	check = is_int(num);
	if (check == 1) {
		cout << "Testing Values " << num << " is True" << endl;
	}
	else {
		cout << "Testing value is false  " << num << endl;
	}

	}
}
/*********************************************************************
** Function: is float
** Description:Checks for float
** Parameters:string num
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/

bool is_float(string mainstring) {
	int k = 0;
	for (int i = 0; i< mainstring.length(); i++) {
		if (mainstring[i] = '.') {
			k = k + 1;
		}
	}
	if (k>1) {
		return 0;
	}
	int y = 0;
	int x = 0;
	int z = 0;
	z = mainstring.length();
	for (int i = 0; i<z; i++) {
		x = char(mainstring[i]);
		if ((x >= 48) && (x <= 57)) {
			x = x + 1;
		}
		else if (x == 46) {
			y = y + 1;
		}
	}
	if (z == (x + y)) {
		return 1;
	}
	else {
		return 0;
	}
}
void is_float() {
	string mainstring;
	float cstring;
	{cout << "Testing value for is float function is '1.22.ba' Expected output: False value , Actual ouput:  "<<endl;
	mainstring = "1.22.ba";
	cstring = is_float(mainstring);
	if (cstring == 1.0) {
		cout << "True value :" << mainstring << endl;
	}
	else {
		cout << " False Value"<<mainstring<<endl;
	}
	} {cout << "Testing value for is  float function is '1.22, Expected output: True value , Actual Ouput:   "<<endl;
	mainstring = "1.22";
	cstring = is_float(mainstring);
	if (cstring == 1.0) {
		cout << "False :" << mainstring << endl;
	}
	else {
		cout << "True " << mainstring << endl;
	}
	} {cout << "Testing value for is float function is '1.22zhsisdaba', Expected output :False Value , Actual Output :  "<<endl;
	mainstring = "1.22zhsisdaba";
	cstring = is_float(mainstring);
	if (cstring == 1.0) {
		cout << "True " << mainstring << endl;
	}
	else {
		cout << "False"<<mainstring<<endl;
	}}
}
/*********************************************************************
** Function: is capital
** Description:Checks for Capital letters
** Parameters:char letter
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/

bool is_capital(char letter) {
	int y;
	int x = 0;
	y = char(letter);
	cout << y << endl;
	if ((y >= 65) && (y <= 90)) {
		x = x + 1;
	}
	if (x == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
void is_capital() {
	bool check = 0;
	char letter;
	{cout << "Testing for is capital function where letter is a Expected output: False not a capital letter Actual output:  " << endl;
	letter = 'a';
	check = is_capital(letter);
	if (check == 1) {
		cout << " Testing value :" << letter << " is true" << endl;
	}
	else {
		cout << "Testing value: " << letter << "is false" << endl;
	}

	}
	{cout << "Testing for is capital function where letter is Z, Expected output: True is a capital letter, Actual Output : " << endl;
	letter = 'Z';
	check = is_capital(letter);
	if (check == 1) {
		cout << " Testing value :" << letter << " is true" << endl;
	}
	else {
		cout << "Testing value: " << letter << "is false" << endl;
	}

	}
	{cout << "Testing for is capital function where letter is 2 , Expected output: False is not a capital Letter" << endl;
	letter = '2';
	check = is_capital(letter);
	if (check == 1) {
		cout << " Testing value :" << letter << " is true" << endl;
	}
	else {
		cout << "Testing value: " << letter << "is false" << endl;
	}

	}

}

/*********************************************************************
** Function: is even
** Description:Checks for even numbers
** Parameters:int num
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/
bool is_even(int num) {
	int y = 0;
	y = num % 2;
	cout << y << endl;
	if (y == 0) {
		return 1;
	}if (y>0) {
		return 0;
	}
}
void is_even() {
	bool check = 0;
	int num;
	{cout << "Testing value for is even function where testing value is 212312, Expected Output: True it is an even number Actual output:  " << endl;
	num = 212312;
	check = is_even(num);
	if (check == 1) {
		cout << "testing value: " << num << " is true" << endl;
	}
	else {
		cout << "Testing Value" << num << "is false" << endl;
	}}
	{cout << "Testing value for is even function where testing value is 301, Expected Output: False it is not an even number, Actual Output :   " << endl;
	num = 301;
	check = is_even(num);
	if (check == 1) {
		cout << "testing value: " << num << "is true" << endl;
	}
	else {
		cout << "Testing Value " << num << " is false" << endl;
	}}
	{cout << "Testing value for is even function where testing value is -200, Expected Output: True it is an even number Actual Output :   " << endl;
	num = -200;
	check = is_even(num);
	if (check == 1) {
		cout << "testing value: " << num << " is true" << endl;
	}
	else {
		cout << "Testing Value " << num << " is false" << endl;
	}}
}

/*********************************************************************
** Function: is odd
** Description:Checks for odd numbers
** Parameters:int num
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/

bool is_odd(int num) {
	int y = 0;
	y = num % 2;
	cout << y << endl;
	if (y == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
void is_odd() {
	bool check = 0;
	int num;
	{cout << "Testing Value for is odd function is 301, Expected Output : True it is an odd number , Actual Output:   " << endl;
	num = 301;
	check = is_odd(num);
	if (check == 1) {
		cout << "testing value:" << num << " is true" << endl;
	}
	else {
		cout << "Testing Value" << num << " is false" << endl;
	}}
	{cout << "Testing Value for is odd function is 302, Expected output: False it is not an odd number , Actual Output:  " << endl;
	num = 302;
	check = is_odd(num);
	if (check == 1) {
		cout << "testing value:" << num << " is true" << endl;
	}
	else {
		cout << "Testing Value" << num << " is false" << endl;
	}}
	{cout << "Testing Value for is odd function is -301, Expected Output: True it is an odd number, Actual output:     " << endl;
	num = -301;
	check = is_odd(num);
	if (check == 1) {
		cout << "testing value: " << num << " is true" << endl;
	}
	else {
		cout << "Testing Value " << num << " is false" << endl;
	}}
}

/*********************************************************************
** Function: Equality test
** Description:Testing num1 and num2 , giving out -1,1 and 0
** Parameters:int num1, int num2
** Pre-Conditions: If condition 
** Post-Conditions:If condition 
*********************************************************************/
int equality_test(int num1, int num2) {
	int y;
	if ((num1<num2)) {
		return -1;
	}
	else if (num1 == num2) {
		return 0;
	}
	else {
		return 1;
	}
}
void equality_test() {
	int num1;
	int num2;
	int y;
	{cout << "Testing value for equality test is num1= 200 and num2= 400, Expected output: -1 as num2> num1 , Actual Output:  " << endl;
	num1 = 200;
	num2 = 400;
	y = equality_test(num1, num2);
	if (y == -1) {
		cout << "Num1<num2 returns -1" << endl;
	}
	if (y == 0) {
		cout << "Num1==num2 returns 0" << endl;
	} {
		if (y == 1) {
			cout << "Num1>num2 returns 1" << endl;
		}}
	cout << y << endl;
	} {cout << "Testing value for equality test is num1= -800 and num2= -800, Expected output: 0 as num1==num2 , Actual Output:  " << endl;
	num1 = -800;
	num2 = -800;
	y = equality_test(num1, num2);
	if (y == -1) {
		cout << "Num1<num2 returns -1" << endl;
	}
	if (y == 0) {
		cout << "Num1==num2 returns 0" << endl;
	} {
		if (y == 1) {
			cout << "Num1>num2 returns 1" << endl;
		}}
	cout << y << endl;
	}
	{cout << "Testing value for equality test is num1= 6523131 and num2= 200, Expected output: 1 as num1>num2, Actual Output:   " << endl;
	num1 = 6523131;
	num2 = 200;
	y = equality_test(num1, num2);
	if (y == -1) {
		cout << "Num1<num2 returns -1" << endl;
	}
	if (y == 0) {
		cout << "Num1==num2 returns 0" << endl;
	} {
		if (y == 1) {
			cout << "Num1>num2 returns 1" << endl;
		}}
	cout << y << endl;
	}
}
/*********************************************************************
** Function: Float is equal
** Description:Checking for precised floating values between 2 numbers
** Parameters:float num1, float num2, float pre
** Pre-Conditions: If condition 
** Post-Conditions:for condition 
*********************************************************************/

bool float_is_equal(float num1, float num2, float pre) {
	float x = 0.0;
	float y = 0.0;
	x = num1 - pre;
	y = num1 + pre;
	if ((num2 >= x) && (num2 <= y)) {
		return 1;
	}
	else {
		return 0;
	}
}
void float_is_equal() {
	float num1;
	float num2;
	float pre;
	bool check;
	{cout << "Testing Value for float is equal are num1= 1.24 num2=1.28 and precision=0.4, Expected output : Value is within the precision , Actual Output:  " << endl;
	num1 = 1.24;
	num2 = 1.28;
	pre = 0.4;
	check = float_is_equal(num1, num2, pre);
	if (check == 1) {
		cout << "Num 1 and num2 are equal within the precision" << endl;
	}
	else {
		cout << "Num1 and Num2 are not equal within the precision " << endl;
	}
	}
	{cout << "Testing Value for float is equal are num1= 124.11 num2=125.23 and precision=0.1, Expected output: Value is not within the precision, Actual output:  " << endl;
	num1 = 124.11;
	num2 = 125.23;
	pre = 0.1;
	check = float_is_equal(num1, num2, pre);
	if (check == 1) {
		cout << "Num 1 and num2 are equal within the precision" << endl;
	}
	else {
		cout << "Num1 and Num2 are not equal within the precision " << endl;
	}
	}
	{cout << "Testing Value for float is equal are num1= -1.24 num2=-1.28 and precision=0.4, Expected output: Values are within the precision, Actual output:  " << endl;
	num1 = -1.24;
	num2 = -1.28;
	pre = 0.4;
	check = float_is_equal(num1, num2, pre);
	if (check == 1) {
		cout << "Num 1 and num2 are equal within the precision" << endl;
	}
	else {
		cout << "Num1 and Num2 are not equal within the precision " << endl;
	}
	}
}
/*********************************************************************
** Function: Numbers present 
** Description:Checks for numbers
** Parameters:string sentence
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/

bool numbers_present(string sentence) {
	int x = 0;
	int y;
	for (int i = 0; i<sentence.length(); i++) {
		y = (sentence[i]);
		if ((y >= 48) && (y <= 57)) {
			x = x + 1;
		}
	}
	if (x>0) {
		return 1;
	}
	else {
		return 0;
	}
}
void numbers_present() {
	string sentence;
	bool k = 0;
	{cout << "Testing value for numbers present function is 'twothreefourfivesix', Expected output : false value , Actual Output:  " << endl;
	sentence = ("twothreefourfivesix");
	k = numbers_present(sentence);
	if (k == 1) {
		cout << "True value" << endl;
	}
	if (k == 0) {
		cout << "false value" << endl;
	}
	} {cout << "Testing value for numbers present function is 'my12name12is12', Expected output: True value numbers are present, Actual Output:   " << endl;
	sentence = ("my12name12is12");
	k = numbers_present(sentence);
	if (k == 1) {
		cout << "True value" << endl;
	}
	if (k == 0) {
		cout << "false value" << endl;
	}
	} {cout << "Testing value for numbers present function is 'miasdhaisd1sjadas', Expected output: True , Actual Output:  " << endl;
	sentence = ("miasdhaisd1sjadas");
	k = numbers_present(sentence);
	if (k == 1) {
		cout << "True value" << endl;
	}
	if (k == 0) {
		cout << "false value" << endl;
	}
	}
}

/*********************************************************************
** Function: letters  present 
** Description:Checks for letters 
** Parameters:string sentence
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/

bool letters_present(string sentence) {
	int x = 0;
	int y;
	for (int i = 0; i<sentence.length(); i++) {
		y = char(sentence[i]);
		if ((y >= 65 && y <= 90) || ((y >= 97) && (y <= 122))) {
			x = x + 1;
		}
	}
	if (x>0) {
		return 1;
	}
	else {
		return 0;
	}
}
void letters_present() {
	string sentence;
	bool check = 0;
	{cout << "Testing letters present function testing value is : 'my12name12is12', Expected Output: True letters are present, Actual Output:   " << endl;
	sentence = ("my12name12is12");
	check = letters_present(sentence);
	if (check == 1) {
		cout << "True value" << endl;
	}
	else {
		cout << "False value" << endl;
	}

	} {cout << "Testing letters present function testing value is : 'twothreefourfivesix', Expected Output: True,  Actual Output:   " << endl;
	sentence = ("twothreefourfivesix");
	check = letters_present(sentence);
	if (check == 1) {
		cout << "True value" << endl;
	}
	else {
		cout << "False value" << endl;
	}

	} {cout << "Testing letters present function testing value is : '123456', Expected output: False, Actual Output:  " << endl;
	sentence = ("1234567");
	check = letters_present(sentence);
	if (check == 1) {
		cout << "True value" << endl;
	}
	else {
		cout << "False value" << endl;
	}

	}
}
/*********************************************************************
** Function: words count 
** Description:Counts word
** Parameters:string sentence
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/

int word_count(string words) {

	int x = 1;
	for (int i = 0; i< words.length(); i++) {

		if (words[i] == ' ') {
			x = x + 1;
		}
		else {
			x = x;
		}

	}


	return x;

}
void word_count() {

	string words;
	int count;
	{cout << "Testing Value for words count function is 'My name is hamza',Expected output: 4 words are there, Actual Output:   " << endl;
	words = ("My name is hamza");
	count = word_count(words);
	cout << "lenght of the words are " << count << endl;
	}
	{cout << "Testing Value for words count function is 'mynameishamza', Expected output: 1 word is there , Actual Output:  " << endl;
	words = ("Mynameishamza");
	count = word_count(words);
	cout << "lenght of the words are " << count << endl;
	}
	{cout << "Testing Value for words count function is 'My 123 name is 1231 hamza', Expected Output: 6 words are there , Actual Output:  " << endl;
	words = ("My 123 name is 1231 hamza");
	count = word_count(words);
	cout << "lenght of the words are " << count << endl;
	}
}
/*********************************************************************
** Function: Contains substring 
** Description:Checks for substring in mainstring
** Parameters:string mainstring, string substring
** Pre-Conditions: for condition, while condition 
** Post-Conditions:  if condition 
*********************************************************************/

bool contains_substring(string mainstring, string substring) {
	int y = 0;
	int x = 0;
	x = mainstring.length();
	if ((substring.length()) > (mainstring.length())) {
		cout << "substring is bigger than mainstring" << endl;
	}
	else {
		for (int i = 0; i<x; i++) {
			if (mainstring[i] == substring[y]) {
				while ((mainstring[i] == substring[y]) && (y<substring.length())) {
					y = y + 1;
					i++;
				}
			}
		}
	}
	if (y == substring.length()) {
		cout << "true value" << endl;
		return 1;
	}
	else {
		cout << "false value" << endl;
		return 0;
	}

}
void contains_substring() {
	string mainstring;
	string substring;
	bool check;
	{cout << "Testing value for contains substring function are Mainstring: 'My name is hamza' and substring:'name is hamza', Expected Output: Mainstring contains substring True value, Actual Output:  " << endl;
	mainstring = ("My name is hamza");
	substring = ("name is hamza");
	check = contains_substring(mainstring, substring);
	if (check == 1) {
		cout << "Main string contains substring True value" << endl;
	}
	else {
		cout << "Main string does not contain substring false value" << endl;
	}
	} {cout << "Testing value for contains substring function are Mainstring: 'My name is hamza' and substring:'name is usman',Expected Output: Mainstring doesnt contain substring False Value, Actual Output:   " << endl;
	mainstring = ("My name is hamza");
	substring = ("name is usman");
	check = contains_substring(mainstring, substring);
	if (check == 1) {
		cout << "Main string contains substring True value" << endl;
	}
	else {
		cout << "Main string does not contain substring false value" << endl;
	}
	} {cout << "Testing value for contains substring function are Mainstring: 'Mynameis hamza' and substring:'my name is hamza munaf and i am not a robot testing value', Expeted Output: Main string does not contain substring false value , Actual Output:  " << endl;
	mainstring = ("my name is hamza munaf and i am not a robot testing value");
	substring = ("nameishamza");
	check = contains_substring(mainstring, substring);
	if (check == 1) {
		cout << "Main string contains substring True value" << endl;
	}
	else {
		cout << "Main string does not contain substring false value" << endl;
	}
	}

}
/*********************************************************************
** Function: to upper 
** Description:Capitalizes all lower letters
** Parameters:string mainstring
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/
string to_upper(string mainstring) {
	int x = 0;
	string cstring;
	int y;
	for (int i = 0; i<mainstring.length(); i++) {
		y = char(mainstring[i]);
		if ((y >= 97) && (y <= 122)) {
			x = ((y - 96) + 64);
			cstring += char(x);
		}
		else {
			cstring += char(y);
		}

	}

	return cstring;
}
void to_upper() {
	string mainstring;
	string cstring;
	{cout << "Test Value Function for to_upper Functions is 'my name is hamza', Expected output: MY NAME IS HAMZA' , Actual Output:   "<<endl;
		mainstring = "my name is hamza";
	cstring = to_upper(mainstring);
	cout << "Converted function is " << cstring << endl;
	} {cout << "Test Value Function for to_upper Functions is 'mY  NamE is HaMZA', Expected Output: 'MY NAME IS HAMZA', Actual output:   " << endl;
	mainstring = "mY  NamE is HaMZA";
	cstring = to_upper(mainstring);
	cout << "Converted function is " << cstring << endl;
	} {cout << "Test Value Function for to_upper Functions is 'myname is 12312hamza', Expected output: 'MYNAME IS 12312HAMZA, Actual output:    " << endl;
	mainstring = "myname is 12312hamza";
	cstring = to_upper(mainstring);
	cout << "Converted function is " << cstring << endl;
	}
}
/*********************************************************************
** Function: to lower 
** Description:All capital letters to lower letters
** Parameters:string mainstring
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/
string to_lower(string mainstring) {
	int x = 0;
	string cstring;
	int y;
	for (int i = 0; i<mainstring.length(); i++) {
		y = char(mainstring[i]);
		if ((y >= 65) && (y <= 90)) {
			x = (y + 32);
			cstring += char(x);
		}
		else {
			cstring += char(y);
		}

	}

	return cstring;
}
void to_lower() {
	string mainstring;
	string cstring;
	{cout << "Test Value Function for to_upper Functions is 'MY NAME IS HAMZA' " << endl;
	mainstring = "my name is hamza";
	cstring = to_lower(mainstring);
	cout << "Converted function is " << cstring << endl;
	} {cout << "Test Value Function for to_upper Functions is 'mY  NamE is HaMZA' " << endl;
	mainstring = "mY  NamE is HaMZA";
	cstring = to_lower(mainstring);
	cout << "Converted function is " << cstring << endl;
	} {cout << "Test Value Function for to_upper Functions is 'MYname IS 12312HamZa' " << endl;
	mainstring = "MYname IS 12312HamZa";
	cstring = to_lower(mainstring);
	cout << "Converted function is " << cstring << endl;
	}
}
/*********************************************************************
** Function: Get int
** Description:Gets int if right input
** Parameters:string mainstring
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/
int get_int(string mainstring) {
	int y = 0;
	int x = 0;
	int z = 0;
	for (int i = 0; i<mainstring.length(); i++) {
		y = char(mainstring[i]);
		if ((y >= 48) && (y <= 57)) {
			x = x + 1;
			z += mainstring[i];
		}
	}
	if (x == mainstring.length()) {
		return z;
	}
	else {
		return 0;
	}
}
void get_int() {
	string mainstring;
	int getint;
	{cout << "Testing valye for get int function is '1123.1', Expected value: wrong input value false value , Actual ouput:  " << endl;
	mainstring = "1123.1";
	getint = get_int(mainstring);
	if (getint>0) {
		cout << "True value " << getint << endl;
	}
	else {
		cout << "Wrong input false value" << mainstring << endl;
	}}
	{cout << "Testing valuee for get int function is '112330', Expected ouput: Right input True value, Actual ouput:   " << endl;
	mainstring = "112330";
	getint = get_int(mainstring);
	if (getint>0) {
		cout << "True value " << mainstring << endl;
	}
	else {
		cout << "False value " << mainstring << endl;
	}}
	{cout << "Testing valuee for get int function is '1123.aba', Expected output: Wrong input False value, Actual output:   " << endl;
	mainstring = "1123.aba";
	getint = get_int(mainstring);
	if (getint>0) {
		cout << "True value " << getint << endl;
	}
	else {
		cout << "Wrong input False value " << mainstring << endl;
	}
	}
}
/*********************************************************************
** Function: Get float
** Description:Gets float if right input
** Parameters:string mainstring
** Pre-Conditions: for condition 
** Post-Conditions:  if condition 
*********************************************************************/
float get_float(string mainstring) {
	int k = 0;
	for (int i = 0; i< mainstring.length(); i++) {
		if (mainstring[i] = '.') {
			k = k + 1;
		}
	}
	if (k>1) {
		return 0.0;
	}
	int y = 0;
	int x = 0;
	int z = 0;
	z = mainstring.length();
	for (int i = 0; i<z; i++) {
		x = char(mainstring[i]);
		if ((x >= 48) && (x <= 57)) {
			x = x + 1;
		}
		else if (x == 46) {
			y = y + 1;
		}
	}
	if (z == (x + y)) {
		return 1.0;
	}
	else {
		return 0.0;
	}
}
void get_float() {
	string mainstring;
	float cstring;
	{cout << "Testing value for get float function is '1.22.ba' Expected output: Wrong input False Value , Actual ouput:  "<<endl;
	mainstring = "1.22.ba";
	cstring = get_float(mainstring);
	if (cstring == 1.0) {
		cout << "Value is  float :" << mainstring << endl;
	}
	else {
		cout << "Wrong Input False Value"<<mainstring<<endl;
	}
	} {cout << "Testing value for get float function is '1.22, Expected output: True value and value is, Actual Ouput:   "<<endl;
	mainstring = "1.22";
	cstring = get_float(mainstring);
	if (cstring == 1.0) {
		cout << "Value is  float :" << mainstring << endl;
	}
	else {
		cout << "Value is float " << mainstring << endl;
	}
	} {cout << "Testing value for get float function is '1.22zhsisdaba', Expected output : Wrong input False Value , Actual Output :  "<<endl;
	mainstring = "1.22zhsisdaba";
	cstring = get_float(mainstring);
	if (cstring == 1.0) {
		cout << "Value is  float :" << mainstring << endl;
	}
	else {
		cout << "Wrong Input False Value"<<mainstring<<endl;
	}}
}

int main() {
  check_range();
	cout<<endl;
	cout<<endl;
	is_int(); 
	cout<<endl;
	cout<<endl;
	is_float();
	cout<<endl;
	cout<<endl;
	is_capital();
	cout<<endl;
	cout<<endl; 
	is_even();
	cout<<endl;
	cout<<endl; 
	is_odd();
	cout<<endl;
	cout<<endl; 
	equality_test(); 
	cout<<endl;
	cout<<endl; 
	float_is_equal();
	cout<<endl;
	cout<<endl; 
	word_count();
	cout<<endl;
	cout<<endl; 
	numbers_present();
	cout<<endl;
	cout<<endl; 
	letters_present();
	cout<<endl;
	cout<<endl; 
	contains_substring();
	cout<<endl;
	cout<<endl; 
	to_upper();
	cout<<endl;
	cout<<endl; 
	to_lower();
	cout<<endl;
	cout<<endl; 
	get_int();
	cout<<endl;
	cout<<endl; 
	get_float();
	cout<<endl;
	cout<<endl; 
}
