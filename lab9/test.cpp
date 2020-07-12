#include "test.h"
test::test(bst<pokemon, string> tree)
{
    treefortest.clone(tree);
}

void test::run()
{
    int choice=0;
    while (choice != 4)
    {
        cout << "----Test Mode----" << endl;
        cout << "1. Add-test" << endl;
        cout << "2. Remove-test" << endl;
        cout << "3. WriteToFilie-test" << endl;
        cout << "4. quit" << endl;
        cout << "You choice: ";
        cin >> choice;
        if (choice ==1)
        {
            testAdds(treefortest);
        }
        if(choice==2)
        {
            testRemoves(treefortest);
        }
        if(choice==3)
        {
            testWriteToFile(treefortest);
        }
    }
}
void test::testAdds(bst<pokemon, string> treeobject)
{

    string usn;
    string jpn;
    int num;
    cout << "Enter a American name for add-test: ";
    cin >> usn;
    cout << "Enter a Japanese name for add-test: ";
    cin >> jpn;
    cout << "Enter a Pokedex for add-test: ";
    cin >> num;
    treeobject.add(pokemon(usn, jpn, num));
    treeobject.visitInOrder(print);
}
void test::testRemoves(bst<pokemon, string> tree)
{
    
    string usn;
    cout << "Enter a American name for remove-test: ";
    cin >> usn;
    tree.remove(usn);
    tree.visitInOrder(print);
}

string test::outtput; //initalize the static member varible
void test::visit(pokemon entry)
{

    string x;
    string y;
    string z;
    string total;
    x = entry.getusn() + " ";
    y = to_string(entry.getindex()) + " ";
    z = entry.getjpn();
    total = x + y + z;
    outtput += total;
    outtput += '\n';
}
void test::print(pokemon entry)
{
    cout << entry.getusn() << " " << entry.getindex() << " " << entry.getjpn() << endl;
}

void test::outfile()
{
    set = outtput;
}
void test::testWriteToFile(bst<pokemon, string> tree)
{
   
    string filename;
    ofstream out;
    cout << "Enter a file name for WirteToFile-test: ";
    cin >> filename;
    out.open(filename);
    tree.visitInOrder(visit);
    outfile();
    out << set;
    out.close();
    outtput.clear();
    set.clear();
}
