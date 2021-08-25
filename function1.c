/* What is function
-------------------- A function is a small program is used to do a particular task
	Eg: printf for print
	    scanf for input
-->Function is a sub program/sub routine/procedure
-->Function is a small program within another program.
-->It is reusable code componenet.
-->It is self contained block
-->It is module
C program is collection of functions,hence it is also called function oriented 
programming language.
Basically functions divided into 2 types.
1)Predefined functions: provided with the software and ready to use.
	Eg:printf(),scanf(),strcmp(),...
2)User defined functions:created by the user.
	Eg:sum(),prime(),factorial(),...
	
Every user defined function is divided into 3 parts.
1)Function declartion/proto typing
2)Function calling
3)Function definition

Function declaration/proto typing:
----------------------------------
Generally function declaration is conducted before or within the main(),before function
calling.
It tells the compiler that we are going to use this kind of functions in our program
in future.
Syntax:[return_datatype]function_name([arguments/parameters])
void sum();

Function calling:
-----------------
It should be conducted within main() only

When a function is called the comipler will serach for matching function definition
and it is available then the program execution is jumped from function calling area
to the function defination area.
Without function call,a function never participated in function execution.Hence it is
mandatory to call a function in a program.

Syntax:function_name([arguments]);
Eg: sum();
*/
 
