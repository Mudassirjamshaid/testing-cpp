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

ostream& operator<<(ostream& COUT, Hello& yt1) {
    COUT << "Name: " << yt1.name << endl;
    COUT << "youTubeChannelCount: " << yt1.youTubeChannelCount << endl;
    return COUT;
};


int main()
{
    Hello yt1 = Hello("Mudassir", 2500);
    Hello yt2 = Hello("Muzammil", 80000);
    cout << yt1 << yt2;
    return 0;
}