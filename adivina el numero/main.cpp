#include <iostream>
using namespace std;

 char resp;
 int ini=0;
 int fin=1000;
 int mid;

int main()
{
    cout << "PIENSA EN UN NUMERO DEL 1 AL 1000" << endl;
    cout << "< SI TU NUMERO ES MENOR" << endl;
    cout << "> SI TU NUMERO ES MAYOR" << endl;
    cout << "= SI ES TU NUMERO" << endl;


    while(resp!='='){
        mid = (ini+fin)/2;
        cout << "Tu nuemro es " << mid <<"?"<<endl;
        cin >> resp;
        if(resp=='<')fin=mid;
        if(resp=='>')ini=mid;
    }
    if (resp=='=') cout << "Tu numero es " << mid <<endl;

    return 0;
}
