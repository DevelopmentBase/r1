#using <mscorlib.dll>
#using <System.dll>

using namespace System;

/*************************************************
* Description:
* The following formula represents Newton's
* second law of motion, force equation: F = ma,
* where
* F = Force,
* m = mass,
* a = acceleration.
*************************************************/

int main(array<String ^> ^args)
{
    float F(0.0), m(0.0), a(0.0);
    F = m*a;
    Console::WriteLine(F); // 0
    return 0;
}
