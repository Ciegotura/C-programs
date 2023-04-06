#include <iostream>
#include <string>

using namespace std;

string autor ="Piotr Cięgotura"; //My name

int direction(char zwr){ //function that converts N E W S directions to cartesian numbers
int direction;
if(zwr=='E')
    direction=0;
if(zwr=='N')
    direction=90;
if(zwr=='W')
    direction=180;
if(zwr=='S')
    direction=270;

return direction;
}

char direction_to_char(int direction){ //function that converts 0 90 180 270 directions to E N W S
char direction_char;
switch(direction){
case 0:
direction_char='E';
    break;

case 90:
direction_char='N';
    break;

case 180:
    direction_char='W';
    break;

case 270:
    direction_char='S';
    break;

default:

    break;
}

return direction_char;
}

int main()
{
    int x_min=0,y_min=0; //this are coordinates of bottom left corner of plateau
    int x_max, y_max;    //this are coordinates of upper right corner of plateau
    int *x_rover, *y_rover; //this are coordinates of rovers
    string *orders;  //this is table of strings which contains orders like "LMRMMLR"
    char *direction_of_rover; //variable containing the direction of the rover (chodzi tu o zwrot N S W E)
    int *direction_of_rower_s; //variable containing the direction of the rover converted to int
    int rover_count; //number of rovers in Mars
    int orders_count; //number of order in each orders
    cout << "Rover navigation in some plateau in Mars!" << endl;
    cout << "Write the coordinates of the upper right corner of the plateau:" << endl;
    cout <<"Write x_max (f.e. 1): ";
    cin>>x_max;
    cout <<"Write y_max (f.e. 1): ";
    cin>>y_max;
    cout << "Coordinates of the plateau:" << endl;
    cout<<"Bottom left corner: x: "<<x_min<<" y: "<<y_min<<" upper right corner x: "<<x_max<<" y: "<<y_max<<endl;
    cout<<"Enter the number of rovers involved in the mission: ";
    cin>>rover_count;

    orders = new string[rover_count]; //memory allocation
    x_rover = new int[rover_count];
    y_rover = new int[rover_count];
    direction_of_rover = new char[rover_count];
    direction_of_rower_s = new int[rover_count]; //memory allocation

    for(int i=0;i<rover_count;i++){  //filling the input data
        cout<<"Enter the input x coordinates (f.e. 1) of the rover number "<<i+1<<": ";
        cin>>x_rover[i];
        cout<<"Enter the input y coordinates (f.e. 1) of the rover number "<<i+1<<": ";
        cin>>y_rover[i];
        cout<<"Enter the direction (N,S,W or E) of the rover number "<<i+1<<": ";
        cin>>direction_of_rover[i];
        cout<<"Enter the orders (f.e. LMRMM) "<<i+1<<": ";
        cin>>orders[i];

    }//filling the input data

    for(int i=0;i<rover_count;i++){
        cout<<"Rover number "<<i<<" x: "<<x_rover[i];
        cout<<" y: "<<y_rover[i];
        cout<<" "<<direction_of_rover[i];
        cout<<" "<<orders[i]<<endl;
    }


    for(int i =0;i<rover_count;i++){ //ride

        orders_count = orders[i].length(); //reads number of orders

        direction_of_rower_s[i]=direction(direction_of_rover[i]); //conversion of directions

        for(int j=0;j<orders_count; j++){ //this loop will do as many times as number of orders

            if (orders[i][j]=='M'){       //order to move forward

                switch(direction_of_rower_s[i]){ //switching by direction
                    case 0: //E
                        x_rover[i]++;

                        if(x_rover[i]>x_max) //make shure that rover would not go over plateau
                            x_rover[i]--;    //dismiss order

                        for(int k = 0;k<i;k++){ //make shure that rover would not go where other rover is
                            if(x_rover[k]==x_rover[i]&&y_rover[k]==y_rover[i])
                                x_rover[i]--;   //dismiss order

                        }

                    break;
                    case 90: //N
                        y_rover[i]++;

                        if(y_rover[i]>y_max) //make shure that rover would not go over plateau
                            y_rover[i]--;//dismiss order

                        for(int k = 0;k<i;k++){ //make shure that rover would not go where other rover is
                            if(x_rover[k]==x_rover[i]&&y_rover[k]==y_rover[i])
                                y_rover[i]--;   //dismiss order

                        }
                    break;
                    case 180: //W
                        x_rover[i]--;

                        if(x_rover[i]<x_min) //make shure that rover would not go over plateau
                            x_rover[i]++;//dismiss order

                            for(int k = 0;k<i;k++){//make shure that rover would not go where other rover is
                                if(x_rover[k]==x_rover[i]&&y_rover[k]==y_rover[i])
                                    x_rover[i]++;  //dismiss order

                            }
                    break;
                    case 270: //S
                        y_rover[i]--;

                        if(y_rover[i]<y_min) //zabezpieczenie przed wyjezdzaniem poza mape
                            y_rover[i]++;

                        for(int k = 0;k<i;k++){
                            if(x_rover[k]==x_rover[i]&&y_rover[k]==y_rover[i])
                                y_rover[i]++;   //cofniencie ruchu jesli miejsce jest zajente przez lazik

                        }

                    break;
                    default:
                    break;
                } //end of switch

            }else if(orders[i][j]=='L'){ //move left

                direction_of_rower_s[i]+=90;
                if(direction_of_rower_s[i]>=360)
                    direction_of_rower_s[i]=0;

            }else if(orders[i][j]=='R'){ //move right

                direction_of_rower_s[i]-=90;
                if(direction_of_rower_s[i]<0)
                    direction_of_rower_s[i]=270;
            }else{};
        }


    }

    for(int i =0;i<rover_count;i++){  //output data
        cout<<x_rover[i]<<" "<<y_rover[i]<<" "<<direction_to_char(direction_of_rower_s[i])<<endl;
    }

    return 0;
}