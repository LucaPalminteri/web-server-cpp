#include <sys/socket.h> // For socket functions
#include <iostream>

// int main()
// {
//     std::cout << "Hello World" << std::endl;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}