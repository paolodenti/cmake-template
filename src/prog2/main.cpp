#include <iostream>
#include <boost/format.hpp>
#include <boost/date_time.hpp>

#include "lib1/lib1.hpp"
#include "lib2/lib2.hpp"

using namespace std;

int main()
{
    // external library using ncurses privately
    banner();

    // external libraries, no dependences
    cout << "libfunc1(" << 2 << ") call: " << libfunc1(2) << endl;
    cout << "libfunc2(" << 2 << ") call: " << libfunc2(2) << endl;

    // header only boost
    unsigned int arr[5] = { 0x05, 0x04, 0xAA, 0x0F, 0x0D };
    cout << boost::format("%02X-%02X-%02X-%02X-%02X")
            % arr[0]
            % arr[1]
            % arr[2]
            % arr[3]
            % arr[4]
         << endl;

    // library boost
    cout << "boost posix time example: " << boost::posix_time::time_from_string("2016/2/19 9:01:33.10") << endl;
}
