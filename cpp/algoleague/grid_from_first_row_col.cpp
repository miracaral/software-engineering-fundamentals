#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int satir, sutun;
    cin >> satir >> sutun;

    vector<int> ilkSatir(sutun);
    vector<int> ilkSutun(satir);

    for (int i = 0; i < sutun; i++) 
    {
        cin >> ilkSatir[i];
    }

    for (int i = 0; i < satir; i++) 
    {
        cin >> ilkSutun[i];
    }

    vector<vector<int> > gizliSekil(satir, vector<int>(sutun));
    for (int i = 0; i < satir; i++) 
    {
        for (int j = 0; j < sutun; j++) 
        {
            cin >> gizliSekil[i][j];
        }
    }

    vector<vector<int> > orijinalSekil(satir, vector<int>(sutun));

    orijinalSekil[0][0] = gizliSekil[0][0] ^ ilkSatir[0] ^ ilkSutun[0];


    for (int j = 0; j < sutun; j++) 
    {
        orijinalSekil[0][j] = ilkSatir[j];
    }


    for (int i = 0; i < satir; i++) 
    {
        orijinalSekil[i][0] = ilkSutun[i];
    }


    for (int i = 1; i < satir; i++) 
    {
        for (int j = 1; j < sutun; j++) 
        {
            orijinalSekil[i][j] = gizliSekil[i][j] ^ orijinalSekil[0][j] ^ orijinalSekil[i][0]; // XOR
        }
    }

    for (int i = 0; i < satir; i++) 
    {
        for (int j = 0; j < sutun; j++) 
        {
            cout << orijinalSekil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}