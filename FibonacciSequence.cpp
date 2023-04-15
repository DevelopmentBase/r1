#using <mscorlib.dll>
#using <System.dll>

using namespace System;

/*************************************************
* Description:
* Finbonacci series starts from 0, then 1, then
* the next digit is evaluated from the sum of
* previous two numbers, and so on.
*
* 0, 1, 1(0+1), 2(1+1), 3(2+1), 5(3+2), 8(5+3)...
*
* The below program prints Fibonacci series less
* than number 255 to the console.
*************************************************/

int main(cli::array<System::String ^> ^args)
{
    int pre(0), cur(1), nxt(0);
    do {
        Console::WriteLine(pre);
        nxt = pre + cur;
        pre = cur;
        cur = nxt;
    } while (pre < 255);
    return 0;
}