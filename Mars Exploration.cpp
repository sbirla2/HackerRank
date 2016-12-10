#include <iostream>
#include <string>

using namespace std;

int main() {
	string Msg;
	cin>>Msg;
	string DefaultMsg="SOS";
	int AlteredLetters=0;
	for(int i=2;i<Msg.size();i+=3)
	{
	    string SubStr,TempChar;
	    TempChar=Msg[i];
	    SubStr.append(TempChar);
	    TempChar=Msg[i-1];
	    SubStr.append(TempChar);
	    TempChar=Msg[i-2];
	    SubStr.append(TempChar);

	    if(SubStr!=DefaultMsg)
	    {
	       if(SubStr[2]!='S')
	       {
	           AlteredLetters++;
	       }
	       if(SubStr[1]!='O')
	       {
	           AlteredLetters++;
	       }
	       if(SubStr[0]!='S')
	       {
	           AlteredLetters++;
	       }
	    }
	}
	std::cout << AlteredLetters << std::endl;
	return 0;
}
