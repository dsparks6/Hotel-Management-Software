#include "hotel.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void hotel::roomStatus() {
	system("CLS");
	//Giving the initial status of each room as Available.
    roomOneStatus = status1;
    roomTwoStatus = status1;
    roomThreeStatus = status1;
    roomFourStatus = status1;
    roomFiveStatus = status1;
    roomSixStatus = status1;
    roomSevenStatus = status1;
    roomEightStatus = status1;
    roomNineStatus = status1;
    roomTenStatus = status1;
    roomElevenStatus = status1;
    roomTwelveStatus = status1;
    roomThirteenStatus = status1;
    roomFourteenStatus = status1;
    roomFifteenStatus = status1;
    roomSixteenStatus = status1;
    roomSeventeenStatus = status1;
    roomEighteenStatus = status1;
    roomNineteenStatus = status1;
    roomTwentyStatus = status1;
    int choice;
    //Giving an opening screen showing that every room is available to be reserved.
    cout << "Types of rooms and abbreviations: \n";
    cout << " King: K\n Double Queen: DQ\n Double Queen with Kitchen: DQK\n Suite: S\n\n";
    cout << "\n\t\tList of rooms and statuses";
    cout << "\n\t\t--------------------------\n";
   while(room_number <= 20){
        for(int i = 1;i <= 5;i++){
            cout << "Room Number: " << i << "\t\tType: K "<< setw(5) <<"\t Status: " << status1 << endl;
        }
        for(int i = 6;i <= 10;i++){
            cout << "Room Number: " << i << "\t\tType: DQ\t Status: " << status1 << endl;
        }
        for(int i = 11;i <= 15;i++){
            cout << "Room Number: " << i << "\t\tType: DQK\t Status: " << status1 << endl;
        }
        for(int i = 16;i <= 20;i++){
            cout << "Room Number: " << i << "\t\tType: S " << setw(5) <<"\t Status: " << status1 << endl;
        }
        break;
        }
    cout << "Would you like to select a room?" << endl;
    cout << "Please enter which room number you would like to use: " << room_number << endl;
    cin >> room_number;
    
    switch(room_number){
        case 1:
            if(roomOneStatus == status1){
                //roomOneStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomOneStatus == status2){
                //roomOneStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomOneStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomOneStatus = status1;
                cout << endl;
            }
            else if(roomOneStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomOneStatus = status1;
                cout << endl;
            }
            break;
        case 2:
            if(roomTwoStatus == status1){
                //roomTwoStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwoStatus == status2){
                //roomTwoStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwoStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwoStatus = status1;
                cout << endl;
            }
            else if(roomTwoStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwoStatus = status1;
                cout << endl;
            }
            break;
        case 3:
            if(roomThreeStatus == status1){
                //roomThreeStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomThreeStatus == status2){
                //roomThreeStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomThreeStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomThreeStatus = status1;
                cout << endl;
            }
            else if(roomThreeStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomThreeStatus = status1;
                cout << endl;
            }
            break;
        case 4:
            if(roomFourStatus == status1){
                //roomFourStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFourStatus == status2){
                //roomFourStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFourStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFourStatus = status1;
                cout << endl;
            }
            else if(roomFourStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFourStatus = status1;
                cout << endl;
            }
            break;
        case 5:
            if(roomFiveStatus == status1){
                //roomFiveStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFiveStatus == status2){
                //roomFiveStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFiveStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFiveStatus = status1;
                cout << endl;
            }
            else if(roomFiveStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFiveStatus = status1;
                cout << endl;
            }
            break;
        case 6:
            if(roomSixStatus == status1){
                //roomSixStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSixStatus == status2){
                //roomSixStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSixStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSixStatus = status1;
                cout << endl;
            }
            else if(roomSixStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSixStatus = status1;
                cout << endl;
            }
            break;
        case 7:
            if(roomSevenStatus == status1){
                //roomSevenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSevenStatus == status2){
                //roomSevenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSevenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSevenStatus = status1;
                cout << endl;
            }
            else if(roomSevenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSevenStatus = status1;
                cout << endl;
            }
            break;
        case 8:
            if(roomEightStatus == status1){
                //roomEightStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomEightStatus == status2){
                //roomEightStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomEightStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomEightStatus = status1;
                cout << endl;
            }
            else if(roomEightStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomEightStatus = status1;
                cout << endl;
            }
            break;
        case 9:
            if(roomNineStatus == status1){
                //roomNineStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomNineStatus == status2){
                //roomNineStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomNineStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomNineStatus = status1;
                cout << endl;
            }
            else if(roomNineStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomNineStatus = status1;
                cout << endl;
            }
            break;
        case 10:
            if(roomTenStatus == status1){
                //roomTenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTenStatus == status2){
                //roomTenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTenStatus = status1;
                cout << endl;
            }
            else if(roomTenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTenStatus = status1;
                cout << endl;
            }
            break;
        case 11:
            if(roomElevenStatus == status1){
                //roomElevenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomElevenStatus == status2){
                //roomElevenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomElevenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomElevenStatus = status1;
                cout << endl;
            }
            else if(roomElevenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomElevenStatus = status1;
                cout << endl;
            }
            break;
        case 12:
            if(roomTwelveStatus == status1){
                //roomTwelveStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwelveStatus == status2){
                //roomTwelveStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwelveStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwelveStatus = status1;
                cout << endl;
            }
            else if(roomTwelveStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwelveStatus = status1;
                cout << endl;
            }
            break;
        case 13:
            if(roomThirteenStatus == status1){
                //roomThirteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomThirteenStatus == status2){
                //roomThirteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomThirteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomThirteenStatus = status1;
                cout << endl;
            }
            else if(roomThirteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomThirteenStatus = status1;
                cout << endl;
            }
            break;
        case 14:
            if(roomFourteenStatus == status1){
                //roomFourteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFourteenStatus == status2){
                //roomFourteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFourteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFourteenStatus = status1;
                cout << endl;
            }
            else if(roomFourteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFourteenStatus = status1;
                cout << endl;
            }
            break;
        case 15:
            if(roomFifteenStatus == status1){
                //roomFifteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFifteenStatus == status2){
                //roomFifteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomFifteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFifteenStatus = status1;
                cout << endl;
            }
            else if(roomFifteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomFifteenStatus = status1;
                cout << endl;
            }
            break;
        case 16:
            if(roomSixteenStatus == status1){
                //roomSixteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSixteenStatus == status2){
                //roomSixteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSixteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSixteenStatus = status1;
                cout << endl;
            }
            else if(roomSixteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSixteenStatus = status1;
                cout << endl;
            }
            break;
        case 17:
            if(roomSeventeenStatus == status1){
                //roomSeventeenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSeventeenStatus == status2){
                //roomSeventeenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomSeventeenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSeventeenStatus = status1;
                cout << endl;
            }
            else if(roomSeventeenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomSeventeenStatus = status1;
                cout << endl;
            }
            break;
        case 18:
            if(roomEighteenStatus == status1){
                //roomEighteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomEighteenStatus == status2){
                //roomEighteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomEighteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomEighteenStatus = status1;
                cout << endl;
            }
            else if(roomEighteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomEighteenStatus = status1;
                cout << endl;
            }
            break;
        case 19:
            if(roomNineteenStatus == status1){
                //roomNineteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomNineteenStatus == status2){
                //roomNineteenStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomNineteenStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomNineteenStatus = status1;
                cout << endl;
            }
            else if(roomNineteenStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will staty as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomNineteenStatus = status1;
                cout << endl;
            }
            break;
        case 20:
            if(roomTwentyStatus == status1){
                //roomTwentyStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwentyStatus == status2){
                //roomTwentyStatus = currentStayScreen(string);
                cout << endl;
            }
            else if(roomTwentyStatus == status3){
                cout << "WARNING: " << status3 << "!! Are you sure you want this room to be available?" << endl;
                cout << "If yes, press 1, if no, press 2 and status will stay as dirty." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwentyStatus = status1;
                cout << endl;
            }
            else if(roomTwentyStatus == status4){
                cout << "Warning: " << status4 << "!! Are you sure you want this room to be available?" << endl;
                cout <<"If yes, press 1, if no, press 2 and status will stay as Maintenance." << endl;
                cin >> choice;
                if(choice == 1)
                    roomTwentyStatus = status1;
                cout << endl;
            }
            break;
        default:
            cout <<"That is not a valid entry!!" << endl;
    }
    cout << "Room Number: 1 " << "\t\tType: K "<< setw(5) <<"\t Status: " << roomOneStatus << endl;
    cout << "Room Number: 2 " << "\t\tType: K "<< setw(5) <<"\t Status: " << roomTwoStatus << endl;
    cout << "Room Number: 3 " << "\t\tType: K "<< setw(5) <<"\t Status: " << roomThreeStatus << endl;
    cout << "Room Number: 4 " << "\t\tType: K "<< setw(5) <<"\t Status: " << roomFourStatus << endl;
    cout << "Room Number: 5 " << "\t\tType: K "<< setw(5) <<"\t Status: " << roomFiveStatus << endl;
    cout << "Room Number: 6 " << "\t\tType: DQ "<< setw(5) <<"\t Status: " << roomSixStatus << endl;
    cout << "Room Number: 7 " << "\t\tType: DQ "<< setw(5) <<"\t Status: " << roomSevenStatus << endl;
    cout << "Room Number: 8 " << "\t\tType: DQ "<< setw(5) <<"\t Status: " << roomEightStatus << endl;
    cout << "Room Number: 9 " << "\t\tType: DQ "<< setw(5) <<"\t Status: " << roomNineStatus << endl;
    cout << "Room Number: 10 " << "\tType: DQ "<< setw(5) <<"\t Status: " << roomTenStatus << endl;
    cout << "Room Number: 11 " << "\tType: DQK "<< setw(5) <<"\t Status: " << roomElevenStatus << endl;
    cout << "Room Number: 12 " << "\tType: DQK "<< setw(5) <<"\t Status: " << roomTwelveStatus << endl;
    cout << "Room Number: 13 " << "\tType: DQK "<< setw(5) <<"\t Status: " << roomThirteenStatus << endl;
    cout << "Room Number: 14 " << "\tType: DQK "<< setw(5) <<"\t Status: " << roomFourteenStatus << endl;
    cout << "Room Number: 15 " << "\tType: DQK "<< setw(5) <<"\t Status: " << roomFifteenStatus << endl;
    cout << "Room Number: 16 " << "\tType: S "<< setw(5) <<"\t Status: " << roomSixteenStatus << endl;
    cout << "Room Number: 17 " << "\tType: S "<< setw(5) <<"\t Status: " << roomSeventeenStatus << endl;
    cout << "Room Number: 18 " << "\tType: S "<< setw(5) <<"\t Status: " << roomEighteenStatus << endl;
    cout << "Room Number: 19 " << "\tType: S "<< setw(5) <<"\t Status: " << roomNineteenStatus << endl;
    cout << "Room Number: 20 " << "\tType: S "<< setw(5) <<"\t Status: " << roomTwentyStatus << endl;
    
}
	system("PAUSE");
}
