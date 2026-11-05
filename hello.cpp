#include <iostream>
#include <string>
using namespace std;
int main()
{
int room = 0;
int choice;
string rooms[4] = {
"Entrance",
"Library",
"Bedroom",
"Exit"
};
cout << "============================\n";
cout << " HAUNTED MANSION GAME\n";
cout << "============================\n";
cout << "\nYou are inside a haunted mansion!";
cout << "\nFind the exit to escape.\n";
while (room != 3)
{
cout << "\nCurrent Room: " << rooms[room];
switch (room)
{
case 0:
cout << "\n\n1. Go to Library";
cout << "\n2. Go to Bedroom";
cout << "\nEnter choice: ";
cin >> choice;
switch (choice)
{
case 1:
room = 1;
break;
case 2:
room = 2;
break;
default:
cout << "Invalid choice!";
}
break;
case 1:
cout << "\nYou found a key!";
cout << "\n1. Go to Entrance";
cout << "\n2. Go to Exit";
cout << "\nEnter choice: ";
cin >> choice;
switch (choice)
{
case 1:
room = 0;
break;
case 2:
room = 3;
break;
default:
cout << "Invalid choice!";
}
break;
case 2:
cout << "\nOh no! A ghost is here!";
cout << "\n1. Go to Entrance";
cout << "\nEnter choice: ";
cin >> choice;
if (choice == 1)
room = 0;
else
cout << "Invalid choice!";
break;
}
}
cout << "\n\nCongratulations!";
cout << "\nYou escaped the Haunted Mansion!";
cout << "\nGAME OVER!\n";
return 0;
}


