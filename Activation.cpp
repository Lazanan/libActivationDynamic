#include "Activation.hpp"

using namespace std;

bool Activation::verifyActivation()
{
    ifstream fs("key_file.txt");
    if (fs.fail())
    {
        cout << "Error!!! Activation file not found" << endl;
        return (false);
    }
    else
    {
        string key;
        fs >> key;
        fs.close();
        if (key == keyTest)
        {
            cout << "The activation is a success" << endl;
            activate();
            return (true);
        }
        else
        {
            string s;
            ifstream tryFile("freeTry.txt");
            tryFile >> s;
            tryFile.close();
            int number = stoi(s), value;
            ofstream w("freeTry.txt");
            value = (number - 1);
            w << value;
            w.close();
            return (false);
        }
    }
}

void Activation::activate()
{
    ofstream fs("freeTry.txt");
    fs << "activated";
    status = true;
    fs.close();
}

Activation::Activation()
{
    string state;
    ifstream fs("freeTry.txt");
    if (fs.fail())
    {
        cout << "freeTry.txt not found" << endl;
        point = 0;
    }
    else
    {
        fs >> state;
        if (state == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(state);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return (status);
}

int Activation::getPoint()
{
    return (point);
}
