/*
 Code Implementation in C++ (Binary To Decimal IPV4 )
 Author : Mehedi Hasan
 Student of GUB
 Department of CSE
*/

#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;
// Function to convert binary string to decimal
string binaryToDecimal(const string& binary)
{
    bitset<8> bits(binary);
    return to_string(bits.to_ulong());
}

// Function to convert dotted binary IP to decimal IP
string convertBinaryToDecimalIP(const string& binaryIP)
{
    string decimalIP;
    istringstream iss(binaryIP);
    string segment;

    while (getline(iss, segment, '.'))
    {
        decimalIP += binaryToDecimal(segment);
        decimalIP += ".";
    }

    // Remove the extra '.' at the end
    decimalIP.pop_back();

    return decimalIP;
}

int main()
{
    string binaryIP; // "11000000.10101000.10000001.10000000"
    cout<<"Enter the Binary of IPV4 : ";
    cin>>binaryIP;
    string decimalIP = convertBinaryToDecimalIP(binaryIP);
    cout << "Decimal IP: " << decimalIP << endl;
    return 0;
}
