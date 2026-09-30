// simple stack!
// things to include :
// 	name and admin status scenario
//		name would overflow and affect admin status number
//		would have to print name and isAdmin at the end
//	limit char name to something low and make isAdmin an int

#include <stdio.h>

int main() {
	int isAdmin = 0; // admin status e.g. 0 is not admin, 1 is admin
    char name[8]; // char array for reading name

	// reads name from the cli input
    printf("Enter your name: ");
    scanf("%s", name);

	// reprints name and admin num, admin num will be weird if overflow occurs
    printf("Hello %s\n", name);

	// checks if admin privileges are allowed and prints status number
		// first runs if its over 1, either you are admin (not in demo) or buffer overflow occurs
		// second runs if its less than 1, do not have admin adn overflow didn't occur
	if (isAdmin >= 1) {
		printf("You have Admin Privileges (%d)\n", isAdmin);
	}
	else {
		printf("You do not have Admin Privileges (%d)\n", isAdmin);
	}
	
    // returns 
    return 0;
}

// https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
// https://www.geeksforgeeks.org/c/format-specifiers-in-c/
