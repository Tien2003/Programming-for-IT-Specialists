#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animal a("Tiger");
    cout << a.get_name() << '\n';
    cout << a.get_species() << '\n';
    cout << "ID=" << a.get_id() << '\n';

    a.set_name("Gizmo");
    cout << a.get_name() << '\n';
    cout << "ID=" << a.get_id() << '\n';

    Animal b("Clown Fish");
    b.set_name("Nemo");
    cout << b.get_name() << '\n';
    cout << "ID=" << b.get_id() << '\n';

    Animal c("Turtle");
    c.set_name("Leonardo");
    cout << c.get_name() << '\n';
    cout << "ID=" << c.get_id() << '\n';

    return 0;
}