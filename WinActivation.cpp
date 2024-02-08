#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Sourse() {
    string programname = "win/win.exe";
    ofstream file;

    file.open("win.bat", ios::trunc);
    file.close();

    file.open("win.bat", ios::app);

    string name;
    getline(cin, name);
    if (file.is_open())
    {
        if (name == "/win10pro11pro") {
            file << "slmgr/ipk W269N-WFGWX-YVC9B-4J6C9-T83GX\nslmgr / skms kms.digiboy.ir\nslmgr / ato";
            system("start win.bat");
        }
        else if (name == "/win10home") {
            file << "slmgr/ipk 46J3N-RY6B3-BJFDY-VBFT9-V22HG\nslmgr / skms kms.digiboy.ir\nslmgr / ato";
            system("start win.bat");
        }
        else if (name == "/win11home") {
            file << "slmgr/ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99\nslmgr / skms kms.digiboy.ir\nslmgr / ato";
            system("start win.bat");
        }
        else if (name == "/win8pro") {
            file << "slmgr/ipk NG4HW-VH26C-733KW-K6F98-J8CK4\nslmgr / skms kms.digiboy.ir\nslmgr / ato";
            system("start win.bat");
        }
        else if (name == "/win8.1pro") {
            file << "slmgr/ipk GCRJD-8NW9H-F2CDX-CCM8D-9D6T9\nslmgr / skms kms.digiboy.ir\nslmgr / ato";
            system("start win.bat");
        }
        else if (name == "/win7pro") {
            file << "slmgr/ipk FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4\nslmgr / skms kms.digiboy.ir\nslmgr / ato";    
            system("start win.bat");
        }
        else {
            file.close();
            cout << "Error";
        }

    }
    else
    {
        cout << "Error";
    }
    file.close();
}

int main()
{
    cout << "List of commands:\n/win10pro11pro\n/win8pro\n/win8.1pro\n/win7pro\nbeta:\n/win10home\n/win11home" << endl;
    cout << "Please select an option" << endl;
    cout << ">>>";
    Sourse();
}
