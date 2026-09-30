// ** EDITED COPY AND PASTE FROM vulnerable/src/stackOverflow.c

// simple stack!
// things to include :
// 	name and admin status scenario
//		name would overflow and affect admin status number
//		would have to print name and isAdmin at the end
//	limit char name to something low and make isAdmin an int

#include <stdio.h>

int main() {
    char name[8]; // char array for reading name
    int isAdmin = 0; // admin status e.g. 0 is not admin, 1 is admin
    char extra; // HELPS TO DETECT IF TOO MANY CHARACTERS ARE WRITTEN 

	// reads name from the cli input
    printf("Enter your name: ");
    
    // CHANGED FROM %S TO %7S TO LIMIT THE AMMOUNT OF CHARACTERS
    scanf("%7s", name);
    
    // CODE THAT WILL READ THE NEXT CHARACTER AND PRINT AN ERROR IF THERE ARE MORE THAN 7 CHARACTERS
		// IF USER TYPED MORE THAN 7 AN ERROR MESSAGE IS RETURNED AND IT WILL EXIT
    if (scanf("%c", &extra) == 1 && extra != '\n') { // IF 1 IS RETURNED THAT MEANS THERE IS MORE THAN 7 CHARACTERS
		printf("Error: name is too long!\n");
		return 1;
	}

	// reprints name and admin num, admin num will be weird if overflow occurs
    printf("Hello %s\n", name);

	// checks if admin privilages are allowed and prints status number
		// first runs if its over 1, either you are admin (not in demo) or buffer overflow occurs
		// second runs if its less than 1, do not have admin adn overflow didn't occur
	if (isAdmin >= 1) {
		printf("You have Admin Privilages (%d)\n", isAdmin);
	}
	else {
		printf("You do not have Admin Privilages (%d)\n", isAdmin);
	}
    // returns 
    return 0;
}

// https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
// https://www.geeksforgeeks.org/c/c-pointers/
// https://www.geeksforgeeks.org/c/format-specifiers-in-c/
