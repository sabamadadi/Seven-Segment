#include <iostream>
#include <iomanip>

using namespace std;

string s;
int b;

int main(){
    cin >> s;
    cin >> b;

    for(int i = 0; i < (int)s.size(); i++){
        bool seg1 = false, seg2= false, seg3 = false;
        bool seg4 = false, seg5= false, seg6 = false, seg7 = false;

        if(s[i] == '0'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = false, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '1'){
            seg1 = false, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '2'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = true, seg6 = false, seg7 = true;
        }
        if(s[i] == '3'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '4'){
            seg1 = false, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '5'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '6'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '7'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '8'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '9'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }

        cout << "  ";
        for(int i = 0; i < b; i++){
            if(seg1) cout << "─";
            else cout << ' ';
            if(i + 1 < b) cout << ' ';
        }
        cout << "  ";
        cout << " ";
    }
    cout << '\n';
    for(int j = 0; j < b; j++){
        for(int i = 0; i < (int)s.size(); i++){
            bool seg1 = false, seg2= false, seg3 = false;
            bool seg4 = false, seg5= false, seg6 = false, seg7 = false;

            if(s[i] == '0'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = false, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '1'){
                seg1 = false, seg2 = false, seg3 = true;
                seg4 = false, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '2'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = true, seg5 = true, seg6 = false, seg7 = true;
            }
            if(s[i] == '3'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(s[i] == '4'){
                seg1 = false, seg2 = true, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '5'){
                seg1 = true, seg2 = true, seg3 = false;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(s[i] == '6'){
                seg1 = true, seg2 = true, seg3 = false;
                seg4 = true, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '7'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = false, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '8'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = true, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '9'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(seg2) cout << "|";
            else cout << " ";
            for(int i = 0; i < 2 * b + 1; i++) cout << " ";
            if(seg3) cout << "|";
            else cout << " ";
            cout << " ";
        }
        cout << '\n';
    }
    for(int i = 0; i < (int)s.size(); i++){
        bool seg1 = false, seg2= false, seg3 = false;
        bool seg4 = false, seg5= false, seg6 = false, seg7 = false;

        if(s[i] == '0'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = false, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '1'){
            seg1 = false, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '2'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = true, seg6 = false, seg7 = true;
        }
        if(s[i] == '3'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '4'){
            seg1 = false, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '5'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '6'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '7'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '8'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '9'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }

        cout << "  ";
        for(int i = 0; i < b; i++){
            if(seg4) cout << "─";
            else cout << ' ';
            if(i + 1 < b) cout << ' ';
        }
        cout << "  ";
        cout << " ";
    }
    cout << '\n';
    for(int j = 0; j < b; j++){
        for(int i = 0; i < (int)s.size(); i++){
            bool seg1 = false, seg2= false, seg3 = false;
            bool seg4 = false, seg5= false, seg6 = false, seg7 = false;

            if(s[i] == '0'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = false, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '1'){
                seg1 = false, seg2 = false, seg3 = true;
                seg4 = false, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '2'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = true, seg5 = true, seg6 = false, seg7 = true;
            }
            if(s[i] == '3'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(s[i] == '4'){
                seg1 = false, seg2 = true, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '5'){
                seg1 = true, seg2 = true, seg3 = false;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(s[i] == '6'){
                seg1 = true, seg2 = true, seg3 = false;
                seg4 = true, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '7'){
                seg1 = true, seg2 = false, seg3 = true;
                seg4 = false, seg5 = false, seg6 = true, seg7 = false;
            }
            if(s[i] == '8'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = true, seg5 = true, seg6 = true, seg7 = true;
            }
            if(s[i] == '9'){
                seg1 = true, seg2 = true, seg3 = true;
                seg4 = true, seg5 = false, seg6 = true, seg7 = true;
            }
            if(seg5) cout << "|";
            else cout << " ";
            for(int i = 0; i < 2 * b + 1; i++) cout << " ";
            if(seg6) cout << "|";
            else cout << " ";
            cout << " ";
        }
        cout << '\n';
    }
    for(int i = 0; i < (int)s.size(); i++){
        bool seg1 = false, seg2= false, seg3 = false;
        bool seg4 = false, seg5= false, seg6 = false, seg7 = false;

        if(s[i] == '0'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = false, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '1'){
            seg1 = false, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '2'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = true, seg6 = false, seg7 = true;
        }
        if(s[i] == '3'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '4'){
            seg1 = false, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '5'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }
        if(s[i] == '6'){
            seg1 = true, seg2 = true, seg3 = false;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '7'){
            seg1 = true, seg2 = false, seg3 = true;
            seg4 = false, seg5 = false, seg6 = true, seg7 = false;
        }
        if(s[i] == '8'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = true, seg6 = true, seg7 = true;
        }
        if(s[i] == '9'){
            seg1 = true, seg2 = true, seg3 = true;
            seg4 = true, seg5 = false, seg6 = true, seg7 = true;
        }

        cout << "  ";
        for(int i = 0; i < b; i++){
            if(seg7) cout << "─";
            else cout << ' ';
            if(i + 1 < b) cout << ' ';
        }
        cout << "  ";
        cout << " ";
    }
    cout << '\n';
    return 0;
}
