#include <iostream>
#include <fstream>
#include <string>

using namespace std;

size_t MaxLength();

int main()
{
    cout << "The largest number of spaces in a row in the t.txt: " << MaxLength() << endl;
    return 0;
}
size_t MaxLength()
{
    ifstream ifs("./t.txt");
    int len = 0;
    int max = 0;

    char c = ifs.get();
    while (ifs.good())
    {
        if (c == ' ')
        {
            len++;

            if (len > max)
                max = len;
        }
        else
            len = 0;
        c = ifs.get();
    }

    return max;
}