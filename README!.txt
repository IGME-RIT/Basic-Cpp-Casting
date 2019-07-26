Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Casting Tutorial!
Prerequesites: None

Casting allows you to change a copy the value of one variable
to another variable, even if the new variable is a different
data type from the old variable.

For example, casting allows you to transfer value from an
integer (4 bytes) to a character (1 byte). However, casting
has its limitations.

Integers can range from negative 2 million to positive 2 million
Characters can range from -128 to +128

This code will work just fine:
int x = 5;
char y = x; 

This code will not work:
int x = 99999;
char y = x;