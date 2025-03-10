#include <iostream>
using namespace std;

// rerata = (nilai1+nilai2)/2;
float hitungRerata(int x, int y)
{
    return (x+y)/2;
}

// if (rerata >= 75)
//      status = "Lulus";
// else
//      status = "Gagal"
string statusKelulusan(float a)
{
    if (a >=75)
        return "Lulus";
    else
        return "Gagal";
}

int main()
{//begin
    // numeric nilai1, nilai2, rerata;
    int nilai1, nilai2;
    float rerata;
    // character status;
    string status;

    // display "Masukkan nilai pertama:"
    cout << "Masukkan nilai pertama:";
    // accept nilai1
    cin >> nilai1;
    // display "Masukkan nilai kedua:"
    cout << "Masukkan nilai kedua:";
    //accept nilai1
    cin >> nilai2;

    // display "status kelulusan =" +status
    cout << "Status kelulusan:" << statusKelulusan(hitungRerata(nilai1, nilai2));

}//end