#include <iostream>
using namespace std;
int main()
{
//example Arithmetic Operators
    int x = 100 + 50;
    cout << "value x : "<< x << "\n";

    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    cout << "value sum 3 : " << sum3 << "\n";

//Arithmetic Operators
    /*
    Operator  Name            Description                              Example
    +         Addition        Adds together two values                 x + y
    -	      Subtraction	  Subtracts one value from another	       x - y
    *	      Multiplication  Multiplies two values	                   x * y
    /	      Division	      Divides one value by another	           x / y
    %	      Modulus	      Returns the division remainder	       x % y
    ++	      Increment	      Increases the value of a variable by 1	++x
    --	      Decrement	      Decreases the value of a variable by 1	--x
    */

//example Assignment Operators
    int y = 10;
    cout << y << "\n";

    int sum4 = 10;
    sum4 += 5;
    cout << sum4 << "\n";

//Assignment Operators
    /*
    
    Operator	Example	   Same As
    =	        x = 5	   x = 5	
    +=	        x += 3	   x = x + 3	
    -=	        x -= 3	   x = x - 3	
    *=	        x *= 3	   x = x * 3	
    /=	        x /= 3	   x = x / 3	
    %=	        x %= 3	   x = x % 3	
    &=	        x &= 3	   x = x & 3	
    |=	        x |= 3	   x = x | 3	
    ^=	        x ^= 3	   x = x ^ 3	
    >>=	        x >>= 3    x = x >> 3	
    <<=	        x <<= 3	   x = x << 3

    */

//example Comparison Operators
    int a = 5;
    int b = 3;
    cout << (a > b) << "\n"; // returns 1 (true) because 5 is greater than 3
//Comparison Operators
    /*
    Operator	Name	                      Example
    ==	        Equal to	                  x == y	
    !=	        Not equal	                  x != y	
    >	        Greater than	              x > y	
    <	        Less than	                  x < y	
    >=	        Greater than or equal to	  x >= y	
    <=	        Less than or equal to	      x <= y
    */

//example Logical Operators
// ture (1) or false (0) is a vaules of logical operators

    // && (and)
    int c = 5;
    int d = 3;
    cout << (c > 3 && d < 10) << "\n";
    // || (or)
    cout << (c < 5 || d < 4) << "\n";
    // ! (make values opposite)
    cout << (!(c < 5 || d < 4)) << "\n";

// returns true (1) because 5 is greater than 3 AND 5 is less than 10

//Logical Operators
/*
    Operator	Name	        Description	                     Example
    && 	        Logical and	    Returns true                     x < 5 &&  x < 10	
                                if both statements are true

    || 	        Logical or	    Returns true if one of           x < 5 || x < 4	
                                the statements is true

    !	        Logical not	    Reverse the result returns       !(x < 5 && x < 10)
                                false  if the result is true
*/
}

/*
//Wrong
    80 <= sum_point <= 100 is incorrect in C++ this command will
    incorrect interpretation to this (80 <= sum_point) <= 100
    and result is (true) or (false) in C++ value is (1) and (0)
        //example
        80 <= sum_point <= 100 (wrong,incorrect)
        sum_point >= 80 && sum_point <= 100 (correct)
*/