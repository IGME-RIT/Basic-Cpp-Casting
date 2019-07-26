/*
Casting
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Include iostream for output during the program.
#include <iostream>
// Use std to avoid writing std:: everywhere.
using namespace std;


// Start of main function
int main() 
{
    // Implicit casting.
    // This is the casting that happens when you copy a variable of one type into one of a different type.
    cout << "Implicit Casting" << endl;
    cout << "Press Enter to Continue" << endl << endl;

    // In this example, a smaller variable is copied into a larger variable.
    // The value is exactly the same as it was before.
    {
        short smaller = 5;
        int larger = smaller;
        cout << "short: " << smaller << " copied to int: " << larger << endl;
    }
    cin.get();

    // In this example, a larger variable is copied into a smaller variable.
    // If the value is larger than the smaller variable can store, it will just only use the places it has room to store.
    {
        int larger = 0x12340000;
        short smaller = larger;
        cout << "int: " << larger << " copied to short: " << smaller << endl;
    }
    cin.get();


    // In this example, a negative signed variable is copied into an unsigned variable.
    // In this case, the sign bit just becomes the largest bit.
    {
        int sign = -1;
        unsigned int nosign = sign;
        cout << "signed int: " << sign << " copied to unsigned int: " << nosign << endl;
    }
    cin.get();


    // In this example, an unsigned variable is copied into a signed one.
    // This just does the reverse of the previous example.
    {
        unsigned int nosign = 32769; // one larger than max signed int can hold.
        int sign = nosign;
        cout << "unsigned int: " << nosign << " copied to signed int: " << sign << endl;
    }
    cin.get();


    // In this example, a float is copied to an int.
    // This will always round down.
    {
        float f = 99.99f;
        int i = f;          // The compiler may give a warning on this line to alert you about the rounding issue.
        cout << "float: " << f << " copied to int: " << i << endl;
    }
    cin.get();


    // In this example, a large int is copied to a float.
    // If the data is too big, you will lose precision when casting to float.
    // This is because floats use fewer bits for the actual number. Extras become an exponent instead.
    {
        int i = INT_MAX;
        float f = i;        // The compiler may give a warning on this line to alert you of the precision loss.
        cout << "large int: " << i << " copied to float: " << f << endl;
    }
    cin.get();


    // In this example, an int is copied to a boolean
    // Zero will be converted to false, anthing else will be true.
    {
        // zero will be interpreted as false.
        int i = 0;
        bool b = i;
        cout << "int: " << i << " copied to bool: " << b << endl;

        i = -5;
        b = i;
        cout << "int: " << i << " copied to bool: " << b << endl;
        // Both of these can also give compiler warnings, because it's usally better to use "int != 0".
    }
    cin.get();





    
    // Type Casting is a more specific kind of casting.
    // Type casting is used to force a conversion that the compiler might otherwise not work.
    cout << "Type Casting" << endl;


    // In this example, a float is casted to an int before being printed out.
    // Without the cast, the compiler prints the number as a float.
    {
        float f = 5.5;

        cout << "float: " << f << " casted to int: " << int(f) << endl;
    }
    cin.get();


    // Type casting can also be used to avoid compiler warnings when converting between float and int and vice versa
    {
        int i = INT_MAX;        // Casting can be written as a function like in the above example.
        float f = (float)i;     // It can also be written like this.
        cout << "large int: " << i << " copied to float: " << f << endl;
    }

    cout << "End of example. Press enter to exit." << endl;
    cin.get();


    return 0;   // End Program.
}