#include <bits/stdc++.h>
using namespace std;
struct Player
{
    char *name;
    int age;
    int phone_number;
    string address;
    string play_game;
    Player *next;
    Player *next_hash;
};
int func_hash(Player *q)
{
    int hash = 0;
    for (size_t i = 0; i < strlen(q->name); i++)
    {
        hash += int(q->name[i]);
    }
    return hash % 10;
}
int func_hash_name(char *search_name)
{
    int search_hash = 0;
    for (size_t i = 0; i < strlen(search_name); i++)
    {
        search_hash += int(search_name[i]);
    }
    return search_hash % 10;
}
Player *func(Player *p, Player *last, Player *mass[], Player *last_hash)
{
    int action = 0;
    do
    {
        cout << "Select Number: " << endl
             << "1 -> Enter Data in Local Database \n2 -> Search by Name \n3 -> Stop \n=> ";
        cin >> action;
        if (action == 1)
        {
            int hash;
            cout << "Enter Data :   " << endl;
            Player *q = new Player;
            char *a = new char[15];
            cout << "Name: ";
            cin >> a;
            q->name = a;
            int n;
            cout << "Age: ";
            cin >> n;
            q->age = n;
            int m;
            cout << "Phone Number: ";
            cin >> m;
            q->phone_number = m;
            string k;
            cout << "Address: ";
            cin >> k;
            q->address = k;
            string j;
            cout << "Can he/she play tennis (Enter Yes or No!): ";
            cin >> j;
            q->play_game = j;
            hash = func_hash(q);
            q->next = NULL;
            q->next_hash = NULL;
            if (p == NULL)
            {
                p = last = q;
            }
            else
            {
                last->next = q;
                last = q;
            }

            if (mass[hash] == NULL)
            {
                mass[hash] = last_hash = q;
            }
            else if (mass[hash] != NULL)
            {
                last_hash->next_hash = q;
                last_hash = q;
            }
        }
        if (action == 2)
        {
            cout << " Please, enter name for search:  ";
            char *search_name = new char[15];
            cin >> search_name;
            int search_hash = func_hash_name(search_name);

            Player *current = mass[search_hash];
            while (current != NULL)
            {
                cout << "Search result!" << endl
                     << endl;
                cout << "Name : " << current->name << endl;
                cout << "Age : " << current->age << endl;
                cout << "Phone Number : " << current->phone_number << endl;
                cout << "Address : " << current->address << endl;
                cout << "Play tennis : " << current->play_game << endl;
                cout << endl;
                current = current->next_hash;
            }
            if (p == NULL)
            {
                cout << "No Result! Try again!\n"
                     << endl;
            }
        }
    } while (action != 3);
    return p;
}

int main()
{
    Player *p = NULL;
    Player *last = NULL;
    Player *last_hash = NULL;
    const int n = 10;
    Player *mass[n];
    for (int i = 0; i < n; i++)
    {
        mass[i] = NULL;
    }
    p = func(p, last, mass, last_hash);
    while (p != NULL)
    {
        Player *q = p;
        p = p->next;
        delete q;
    }
    return 0;
}