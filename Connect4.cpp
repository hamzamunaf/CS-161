#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void check_input(int** array, int rowcheck, int colcheck, int val, int cols);
int horizontalcheck(int** array, int cols, int rows, int val);
int verticalcheck(int** array, int cols, int rows, int val);
int DRcheck(int** array, int cols, int rows, int val);
int DLcheck(int** array, int cols, int rows, int val);
bool check_win(int** array, int temp3, int temp2, int val);


void deletearr(int** array, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[]array[i];
	}
	delete[] array;
}



int** init_array(int rows, int cols) {
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	return array;
}


void poparr(int** array, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = 0;
		}
	}
}

void printarr(int** array, int rows, int cols) {
	for (int j = 0; j < cols; j++){
		cout<<" "<<j<<"    ";
	}
	cout<<endl;
	cout<<"!----------------------------------------------------!"<<endl;
	for (int i = 0; i < rows; i++) {
		//cout<< i << endl;
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "     ";
		}
		cout << endl;
	}
	cout<<endl;
}

void gamestart2(int** array, int temp3, int temp2) {
	int tempnumber1 = temp3 * temp2;
	int tempnumber2 = 0;
	int rowcounter = 0;
	int tempinput = 0;
	bool wincheck = false;
	cout << "Starting game" << endl;
	while (tempnumber2 != tempnumber1) {
		int i = temp3 - 1;
		int user1col;
		int user2col;
		cout << "For player 1 token will be 1 and for player 2 token will be 2" << endl;
		cout << "Enter your column by an enter" << endl;
		cin >> user1col;
		//array[i][usercol] = 1;
		tempinput = 0;
		do {
			if (array[i][user1col] != 0) {
				i = i - 1;
			}
			else
				tempinput = 1;
		} while (tempinput != 1);
		check_input(array, i, user1col, 1, temp2);
		printarr(array, temp3, temp2);
		wincheck = check_win(array, temp3, temp2, 1);
		if (wincheck == true) {
			cout << "Player 1 won" << endl;
			deletearr(array, temp3);
			exit(1);
		}
		wincheck = check_win(array, temp3, temp2, 2);
		if (wincheck == true) {
			cout << "Player 2 won" << endl;
			deletearr(array, temp3);
			exit(1);
		}
		i = temp3 - 1;
		tempnumber2++;
		cout << "For player 2 token will be 2 and for player 1 token will be 1" << endl;
		cout << "Enter your column by an enter" << endl;
		cin >> user2col;
		tempinput = 0;
		do {
			if (array[i][user2col] != 0) {
				i = i - 1;
			}
			else
				tempinput = 1;
		} while (tempinput != 1);
		check_input(array, i, user2col, 2, temp2);
		rowcounter++;
		printarr(array, temp3, temp2);
		wincheck = check_win(array, temp3, temp2, 1);
		if (wincheck == true) {
			cout << "Player 1 won" << endl;
			exit(1);
		}
		wincheck = check_win(array, temp3, temp2, 2);
		if (wincheck == true) {
			cout << "Player 2 won" << endl;
			exit(1);
		}
		tempnumber2++;
		i = 0;
	}
}

void gamestart1(int** array, int temp3, int temp2) {
	int tempnumber1 = temp3 * temp2;
	int tempnumber2 = 0;
	int rowcounter = 0;
	int tempinput = 0;
	int check3 = 0;
	bool wincheck = false;
	cout << "Starting game" << endl;
	while (tempnumber2 != tempnumber1) {
		int i = temp3 - 1;
		int user1col;
		wincheck = check_win(array, temp3, temp2, 1);
		if (wincheck == true) {
			cout << "Player 1 won" << endl;
			deletearr(array, temp3);
			exit(1);
		}
		wincheck = check_win(array, temp3, temp2, 2);
		if (wincheck == true) {
			cout << "Computer won SORRY :( TRY AGAIN" << endl;
			deletearr(array, temp3);
			exit(1);
		}
		int user2col;
		cout << "For player 1 token will be 1 and for Computer token will be 2" << endl;
		cout << "Enter your column by an enter" << endl;
		cin >> user1col;
		//array[i][usercol] = 1;
		tempinput = 0;
		do {
			if (array[i][user1col] != 0) {
				i = i - 1;
			}
			else
				tempinput = 1;
		} while (tempinput != 1);
		check_input(array, i, user1col, 1, temp2);
		printarr(array, temp3, temp2);
		i = temp3 - 1;
		tempnumber2++;
		user2col = rand() % temp3;
		tempinput = 0;
		do {
			if (array[i][user2col] != 0) {
				i = i - 1;
			}
			else
				tempinput = 1;
		} while (tempinput != 1);
		check_input(array, i, user2col, 2, temp2);
		rowcounter++;
		printarr(array, temp3, temp2);
		tempnumber2++;
		i = 0;
	}
}

void check_input(int** array, int rowcheck, int colcheck, int val, int cols) {
	int check = 0;
	int check1 = 0;
	int check3 = 0;
	do {
		if (colcheck > cols-1) {
			cout << "Input not in range please try again :";
			cout << "Error checking 1" << endl;
			cin >> colcheck;
		}
		else check1 = 1;
	} while (check1 != 1);
	do {
		if (array[rowcheck][colcheck] != 0){
			cout << "Error Wrong column try again: ";
			cout << "Error checking 2" << endl;
			cin >> colcheck;
		}
		else {
			//cout << "Error checking 3" << endl;
			array[rowcheck][colcheck] = val;
			check = 1;
		}
	} while (check != 1);

}

int horizontalcheck(int** array, int cols, int rows, int val) {
	int connections = 4;
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] == val) {
				count++;
			}
			else if (count >= connections) {
				return 1;
			}
			else {
				count = 0;
			}
		}
		count = 0;
	}
	//cout << "Horizontal working" << endl;
	return count;
}

int verticalcheck(int** array, int cols, int rows, int val) {
	int connections = 4;
	int count = 0;
	//cout << "Here are the request cols" << cols << endl;
	//cout << "Here are the request rows" << rows << endl;
	for (int j = 0; j <cols; j++) {
		//cout << "Problem here" << endl;
		for (int k = rows-1; k >= 0; k--) {
			//cout << "Problem here 2" << endl;
			if (array[k][j] == val) {
				count++;
				//cout << "Problem here 3" << endl;
			}
			else if (count >= connections) {
				return 1;
			}
			else {
				count = 0;
			}
		}
		count = 0;
	}
	return count;
}

int DRcheck(int** array, int cols, int rows, int val) {
	int count = 0;
	int connections = 4;
	for (int i = rows-1 ; i >= 0; i--) {
		for (int j = cols-1; j >=0; j--) {
			for (int k = 0; k <= i && k <= j; k++) {
				//cout << "Value of j and I here :" << j << i << endl;
				//cout << "Value of k" << k << endl;
				if (array[i - k][j - k] == val) {
					count++;
				}
				else if (count >= connections) {
					return 1;
				}
				else
					count = 0;
			}
			count = 0;
		}
		count = 0;
	}
	return count;
}

int DLcheck(int** array, int cols, int rows, int val) {
	int count = 0;
	int connections = 4;
	for (int i = rows-1; i >= 0; i--) {
		for (int j = 0; j<cols; j++) {
			for (int k = 0; k <= i && k <= (cols-connections)+1; k++) {
				//cout << "Value of j and I here :" << j << i << endl;
				//cout << "Value of k" << k << endl;
				if (array[i - k][j+k] == val) {
					//cout << "LEts see if we are counting even" << count << endl;
					count++;
				}
				else if (count >= connections) {
					return 1;
				}
				else
					count = 0;
			}
			count = 0;
		}
		count = 0;
	}
	return count;
}

bool check_win(int** array, int temp3, int temp2, int val) {
	int temph = 0, tempv = 0 , tempDR = 0, tempDL=0, temp = 0;
	//temph is horizontal check, tempv is vertical check, tempdr is rightdiagnol check, tempdl is left diagonal check
	tempv = verticalcheck(array, temp3, temp2, val);
	temph = horizontalcheck(array, temp3, temp2, val);
	tempDR = DRcheck(array, temp3, temp2, val);
	tempDL = DLcheck(array, temp3, temp2, val);
	if (tempv > 0 || temph > 0 || tempDR > 0 || tempDL > 0) {
		return true;
	}
	else
		return false;

}

int main(int argc, char* argv[]) {
	srand(time(NULL));
	if ((argc < 4) || (argc > 4)) {
		cout << "Invalid arguments" << endl;
		exit(1);}
	int temp = 0;
	int temp2 = 0;
	int temp3 = 0;
	temp = atoi(argv[1]);
	temp2 = atoi(argv[2]);
	temp3 = atoi(argv[3]);
	if (( temp >  2 ) || (temp < 1))  {
		cout << "Invalid arguments Error " << endl;
		exit(1);}
	if ((temp2 <= 4) && (temp3 <= 4)) {
		cout << " Invalid grid size " << endl;
		exit(1);}
	int** arr = init_array(temp3, temp2);
	poparr(arr, temp3, temp2);
	cout << endl;
	printarr(arr, temp3, temp2);
	if (temp == 2) {
		gamestart2(arr, temp3, temp2);}
	if (temp == 1) {
		gamestart1(arr, temp3, temp2);}
}
