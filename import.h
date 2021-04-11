//
// Created by kylel on 4/9/2021.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#ifndef PA5_2_IMPORT_H
#define PA5_2_IMPORT_H

#endif //PA5_2_IMPORT_H

class shippingAddress{
private:
    string streetAddress;
    string city;
    string state;
    string zipCode;

public:
    void Constructor(){
        streetAddress = "";
        city = "";
        state = "";
        zipCode = "";
    }
    // Setters
    void setStreet(){
        string temp;
        cout << endl << "Enter street address: ";
        getline(cin, temp);
        streetAddress = temp;
    };

    void setCity(){
        cout << endl << "Enter city: ";
        getline(cin, city);
    };

    void setState(){
        cout << endl << "Enter state: ";
        getline(cin, state);
    };

    void setZip(){
        cout << endl << "Enter zip code: ";
        getline(cin,zipCode);
    };

    // Getters
    string getStreet(){
        return streetAddress;
    };

    string getCity(){
        return city;
    };

    string getState(){
        return state;
    };

    string getZip(){
        return zipCode;
    };

    void getinfo(){
        setStreet();
        setCity();
        setState();
        setZip();
    };

    void formattedPrint(){
        cout << endl << "The shipping address is: " << endl << endl;
        cout << getStreet() << endl;
        cout << getCity() << ", " << getState() << endl;
        cout << getZip() << endl;
    };
};

class customerInfo{
private:
    string firstName;
    string lastName;
    string email;
    string phoneNumber;
public:
    void Constructor(){
        firstName = "";
        lastName = "";
        email = "";
        phoneNumber = "";
    };
    // Setters
    void setFirst(){
        cout << endl << "Enter your first name: ";
        getline(cin,firstName);
    };

    void setLast(){
        cout << endl << "Enter your last name: ";
        getline(cin,lastName);
    };

    void setEmail(){
        cout << endl << "Enter your email address: ";
        getline(cin,email);
    };

    void setPhone(){
        cout << endl << "Enter your phone number: ";
        getline(cin,phoneNumber);
    };
    // Getters
    string getFirst(){
        return firstName;
    };
    string getLast(){
        return lastName;
    };
    string getEmail(){
        return email;
    };
    string getPhone(){
        return phoneNumber;
    };

    void getInfo(){
        setFirst();
        setLast();
        setEmail();
        setPhone();
    }

    void printInfo(){
        cout << endl << "Customer Information:" << endl;
        cout << getFirst() << " " << getLast() << endl;
        cout << getEmail() << endl;
        cout << getPhone() << endl;
    }

};