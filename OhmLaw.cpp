#using <mscorlib.dll>
#using <System.dll>

using namespace System;

/*************************************************
* Description:
* The following formula represents Ohm's law:
* R = V/I, where
* R = resistance,
* V = potential (potential difference) (volt),
* I = current intensity (ampere).
*************************************************/

int main(array<String ^> ^args)
{
    float R(0.0), V(220.0), I(0.44);
    R = V / I;
    Console::WriteLine(R); // 500 Ohm
    return 0;
}
