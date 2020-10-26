#include<iostream>
#include<string>
using namespace std;

#define INDEX 1

typedef struct dat {
    string name;
    int id, phn_no;
    float salary;
};

dat d1[INDEX];
int record_pointer = 0;

void add_record() {
    dat *d;
    
    
    if (record_pointer > 0) {
        d = &d1[record_pointer];
        d = new dat;
        record_pointer++;
        cout<<"\nEnter name: ";
        cin >> d1[record_pointer].name;
        cout << "\nEnter id: ";
        cin >> d1[record_pointer].id;
        cout << "\nEnter phone number: ";
        cin >> d1[record_pointer].phn_no;
        cout << "\nEnter Salary: ";
        cin >> d1[record_pointer].salary;
    }
    else {
        cout<<"\nEnter name: ";
        cin >> d1[record_pointer].name;
        cout << "\nEnter id: ";
        cin >> d1[record_pointer].id;
        cout << "\nEnter phone number: ";
        cin >> d1[record_pointer].phn_no;
        cout << "\nEnter Salary: ";
        cin >> d1[record_pointer].salary;
        record_pointer++;
    }
}

void display_record(int num, int rec) {
    cout << "\nid\t\tName\t\tPhone number\t\tsalary\n";
    if (num == 1) {
        for (int i = 0;i <= record_pointer;i++) {
            cout<<"\n"<<d1[i].id<<"\t\t"<<d1[i].name;
            cout<<"\t\t"<<d1[i].phn_no<<"\t\t"<<d1[i].salary<<"\n";
        }
    }
    else if (num == 0) {
            cout<<"\n"<<d1[rec].id<<"\t\t"<<d1[rec].name;
            cout<<"\t\t"<<d1[rec].phn_no<<"\t\t"<<d1[rec].salary<<"\n";
    }
}

int main(){
    int option;
    char ans;
    add_record(); 
    cout << "\nEnter\n1. Add record\n2. Display Database\n3. Search record\n4. Delete record";
    cin >> option;
    do {
        switch(option) {
            case 1:
                add_record();
                break;

            case 2:
                display_record(1,0);
                break;  
    } 
    while(ans == 'Y' || ans == 'y');

}