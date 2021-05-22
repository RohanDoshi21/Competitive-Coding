#include <iostream>
#include <string>
using namespace std;
void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while( pos != std::string::npos)
    {
        // Replace this occurrence of Sub String
        data.replace(pos, toSearch.size(), replaceStr);
        // Get the next occurrence from the current position
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string data;
        cin >> data;
        findAndReplaceAll(data, "party", "pawri");
       cout << data << endl;
    }
    return 0;
}