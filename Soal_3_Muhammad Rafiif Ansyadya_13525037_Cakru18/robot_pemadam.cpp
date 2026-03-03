#include <iostream>
using namespace std ;
class RobotPemadam{

private : 
    int jarak ;
    string status;

public :
    void inputSensor () {
        cout << "Masukkan jarak : ";
        cin >> jarak;
        prosesLogika() ;
    }

    void prosesLogika () {
        if (jarak > 20){
            status = "Maju mencari api";
        }
        else if ((jarak <=20 && jarak > 5)){
            status = "UDAH DEKET NIH BRAY" ;
    }
        else {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }
    int checkJarak () 
    {
        return jarak ;
    }
    void cetakStatus () {
        cout << "[SENSOR : "<< jarak << " cm] -> Action : [" << status << "]" << endl;
    }
} ;

int main(){ 
    
    RobotPemadam robot ;
    robot.inputSensor() ;
    robot.cetakStatus() ;
    while (robot.checkJarak() != 67) {
        robot.inputSensor() ;
        robot.cetakStatus() ;
    }            
        
    return 0;
}