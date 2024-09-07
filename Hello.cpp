#include <iostream>
#include <string>
using namespace std;

struct Hello
{
    string name;
    int youTubeChannelCount;

    Hello(string name, int youTubeChannelCount) {
        this->name = name;
        this->youTubeChannelCount = youTubeChannelCount;
    }
};

void operator<<(ostream& COUT, Hello& yt1) {
    COUT << "Name: " << yt1.name << endl;
    COUT << "youTubeChannelCount: " << yt1.youTubeChannelCount << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
};


int main()
{
    Hello yt1("Mudassir", 2500);
    cout << yt1;
    return 0;
}