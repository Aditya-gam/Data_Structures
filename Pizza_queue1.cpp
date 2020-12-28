// #include <iostream>
// #include <vector>
// #include <string>
// #include <queue>

// using namespace std;

// class pizza{
// private:
//     string phoneNo;
//     string order;
//     int orderNo;
//     int amount;

// public:
//     void take_Order(queue<pizza> par, string phnNo, string orderDetails, int amount, int orderNo){
        
//     }

// };

// int main(){
//     queue<pizza> parlor;
//     int opt;
//     string phn, order; 
//     int orderNo = 0, amt;

//     while(true){
//         cout << "Enter\n1) Take Order\n2) Deliver first order\n3) Show order queue\n4) Day summary\n0) Exit\nChoice: ";
//         cin >> opt;

//         switch(opt) {
//             case 1:
//                 cout << "\nEnter phone number: ";
//                 cin >> phn; 
//                 cout << "Enter order details: ";
//                 scanf(" %[^\n]s",order);
//                 cout << "Enter amount (cost) : ";
//                 cin >> amt;
//                 take_Order(parlor, phn, order, amt, ++orderNo);
//         }
//     }
// }