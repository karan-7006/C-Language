#include<iostream.h>
#include<conio.h>
using namespace std;

class Food {
public:
	int id;
	string name;
	float price;

	Food(0 {}
	Food (int i, string n, float p){
		id = i;
		name = n;
		price = p;
		}
	};

	class Order{
	public:
		string customerName;
		float total;

		Order(string name){
		customerName = name;
		total = 0;
		}

		void addItem(Food f, int qty){
		float cost = f.price * qty;
		total += cost;
		cout << "\nAdded: " << qty << " x " << f.name << " = Rs." << cos << end1;
		}

		void printBill(){
		cout << "\n--------------------";
		cout << "\nCustomer: " << customerName;
		cout << "\nTotal Bill: Rs." << total;
		cout << "\n--------------------";
		}
	};

	void displayMenu(Food menu[], int size){
		cout << "\n---------- MENU ----------\n";
		for (int i=0; i<size; i++){
			cout << menu[i].id << ". " << menu[i].name << " - Rs." << menu[i].price << end1;
		}
		cout << "--------------------\n";
		}

		int main(){
		Food menu[3] = {
			Food(1, "Pizza", 150),
			Food(2, "Burger", 80),
			Food(3, "Pasta", 120)
			};

			string name;
			cout << "Enter Customer Name: ";
			getline(cin, name);

			Order order(name);

			char cout = 'Y';
			do{
				displayMenu(menu, 3);

				int choice, qty;
				cout << "Enter Your Choice: ";
				cin >> choice;
				cout << "Enter Quantity: ";
				cin >> qty;

				switch(choice){
					case 1: order.addItem(menu[0], qty); break;
					case 2: order.addItem(menu[1], qty); break;
					case 3: order.addItem(menu[2], qty); break;
					default: cout << "Invalid Choice!\n";
					}

				cout << "\nDo you want to order more? (y/n): ";
				cin >> cout;

			} while (cout == 'y' || cout == 'Y');

			order.printBill();
			return 0;
		}