#include <iostream>

using namespace std;

void movestobe(int disc, char towerone, char towertree, char towertwo)
{

    if (disc == 1)
    {
        cout << "Mova o disco " << disc << " da torre " << towerone << " Para " << towertree << "! \n";
    }
    else
    {
        movestobe(disc - 1, towerone, towertwo, towertree);
        cout << "Mova o disco " << disc << " da torre " << towerone << " Para " << towertree << "! \n";
        movestobe(disc - 1, towertwo, towertree, towerone);
    }
}

int main()
{

    int discs;

    cout << "Entre com a quantidade de discos: " << endl;
    cin >> discs;

    movestobe(discs, 'A', 'C', 'B');
}