// medium format string!
// things to include:
//	password input and hidden password
//  	reprinting password after getting it wrong is the vulnerability
//		not formatting the string is important!!! (vulnerability demo wise anyways...)

#include <stdio.h>
#include <string.h>

int main() {
    char password[10];
    int authenticated = 0;

    printf("Enter password: ");
    scanf("%s", password);

	// check if entered password is correct, if yes auth=1, if no auth=0
    if (strcmp(password, "secret123") == 0) {
        authenticated = 1;
    } else {
		// reprints incorrect password along with warning
        printf(password);
        printf("\nWrong password!\n");
    }

	// checks if auth=1
    if (authenticated) {
        printf("Access granted.\n");
    }	
    return 0;
}

// https://en.cppreference.com/w/c/string/byte/strcmp
// https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
