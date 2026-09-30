// ** EDITED COPY AND PASTE FROM vulnerable/src/integerOverflow.c

// difficult integer! (took a few hours to understand what was happening......)
// things to include :
// 	payment scenario?
//	if the payment int is very large, balance + payment may be more than
//		the assigned int
// 	when max value is exceeded large numbers wrap around to 0
//	maybe try using unsigned short as only stores num 0-65535
//		according to maths in doc, overflow should be between 64636-65535, more boundrarys further ahead
//		if 70000 is inputted, not stored as 70000 as is larger than
//		unsigned short

//	unsigned short is chosen for ease of overflow demenstration

#include <stdio.h>

int main() {
	unsigned short balance = 900; // balance in account at the time of compile and running
	unsigned short limit = 1000; // max allowed balance
	unsigned short payment; // stores users input later
	
	printf("Balance = %u, Limit = %u\n", balance, limit); // prints out the current balance and limit
	printf("Enter Payment:\n");
	
	// if no number is input then returns input error e.g. character input
	if (scanf("%hu", &payment) != 1) {
		printf("Input Error\n");
		return 1;
	}
	
	// CHECK THEN ADDITION, NOT ADDITION THEN CHECK WHICH ALLOWED THE OVERFLOW TO OCCUR
		// IF PAYMENT IS LARGER THAN LIMIT, IT IS REJECTED
		// IF PAYMENT IS SMALLER THAN LIMIT THEN IT IS ACCEPTED 
	if (balance + payment > limit) {
		printf("Payment Rejected...\n");
	}
	else {
		balance = balance + payment;
		printf("Payment Accepted, New Balance = %u\n", balance);
	}
	return 0;
}
	
// https://www.w3schools.com/c/c_data_types_extended.php
// https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm
// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
// https://www.geeksforgeeks.org/c/format-specifiers-in-c/
