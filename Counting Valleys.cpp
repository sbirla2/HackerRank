#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Number;
    int lvalley = 0;
    bool valley;
    int count=0;
    char character;

    cin >> Number;
    while(--Number){
        cin >> character;

        if(character == 'U')lvalley++;
        else lvalley--;

        if(lvalley<0)
        {
            valley=true;
        }
        else
        {
            valley=false;
        }
        if(lvalley== -1 && character=='D' && valley)
            {
            count++;
            }
    }
    cout << count << endl;
    return 0;
}
