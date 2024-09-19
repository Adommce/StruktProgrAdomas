#include <iostream>
using namespace std;
    int main()
{
    int pazimys1, pazimys2, pazimys3;
        cout << "Iveskite pirmaji pazimi" << endl;
        cin >> pazimys1;
        cout << "Iveskite antraji pazimi" << endl;
        cin >> pazimys2;
        cout << "Iveskite treciaji pazimi" << endl;
        cin >> pazimys3;
    int sum = pazimys1 + pazimys2 + pazimys3;
    int average = sum / 3;
        cout << "Vidurkis = " << average << endl;
    if (average >=5)
    {
       cout << "Vidurkis teigiamas";
    }
    else
    {
        cout << "Vidurkis neigiamas";
    }

        return 0;
}
