#include <iostream>
using namespace std;

int main()
{
    int choice, num1, i, size, sum = 0, sub = 0, r, c;
    int lenght, width, a, height, base;
    float dividend, divisor, Quatient;
    char ch;
    do
    {
        cout << "\t\t\t\t\tMENU BAR" << endl;
        cout << "1.Calculator\n2.Area\n3.Radius\n4.Volume" << endl;
        cout << "Enter your Choice!" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\t\t\t\t\tCalculator" << endl;

            cout << "1.Additional(+)\n2.Substraction(-)\n3.Multification(*)\n4.Divison" << endl;
            cout << "Enter your choice" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\t\t\t\t\tAdditional" << endl;

                cout << "How many element do you want to Add" << endl;
                cin >> size;
                for (i = 1; i <= size; i++)
                {
                    cin >> num1;
                    sum += num1;
                }
                cout << "Sum=" << sum << endl;
                break;
            case 2:
                cout << "\t\t\t\t\tSubtraction" << endl;
                cout << "____________________________________________________________________________________________________________" << endl;
                cout << "Enter how many element do you want to subtract" << endl;
                cin >> size;
                for (i = 1; i <= size; i++)
                {
                    cin >> num1;
                    sub -= num1;
                }

                break;
            case 3:
                do
                {
                    cout << "\t\t\t\t\tMultification" << endl;
                    cout << "_______________________________________________________________________________________________" << endl;
                    cout << "Enter the Number First" << endl;
                    cin >> num1;
                    cout << "Enter the Number Second" << endl;
                    int num2;
                    cin >> num2;
                    cout << "Multification of Two Number is=" << num1 * num2 << endl;
                    cout << "Do you want to Continue the Process! " << endl;
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
                break;

            case 4:
                do
                {
                    cout << "\t\t\t\t\t Division" << endl;
                   
                    cout << "Enter the Divident" << endl;
                    cin >> dividend;
                    cout << "Enter the Divisor" << endl;
                    cin >> divisor;
                    cout << "Quotient=" << dividend / divisor << endl;
                    cout << "Do you want to Continue the Process! " << endl;
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');

                break;

            default:
                break;
            }

            break;
        case 2:
            do
            {
                cout << "\t\t\t\t\t Area" << endl;
              
                cout << "1.Area of Circle\n2.Area of Rectangle\n3.Area of square\n4.Area of Triangle\n5.Area of Cylinder" << endl;
                cout << "Enter the the choice!" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "\t\t\t\t\tArea of Circle" << endl;
                    cout << "Enter the Radius of Cicle=" << endl;
                    cin >> r;
                    cout << "Area of Circle is =" << 3.14 * r * r << endl;
                    break;

                case 2:
                    cout << "\t\t\t\t\tArea of Rectangle" << endl;
                    cout << "Enter the lenght=" << endl;
                    cin >> lenght;

                    cout << "Enter the Width=" << endl;
                    cin >> width;

                    cout << "Area of Reactangle is =" << lenght * width << endl;
                    break;

                case 3:
                    cout << "\t\t \t\t\tArea of Square" << endl;
                    cout << "Enter the Side=" << endl;
                    cin >> a;

                    cout << "Area of Reactangle is =" << a * a << endl;
                    break;

                case 4:
                    cout << "\t\t\t\t\tArea of Triangle" << endl;

                    cout << "Enter the Height Triangle=" << endl;
                    cin >> height;

                    cout << "Enter the base of Triangle=" << endl;
                    cin >> base;

                    cout << "Area of Triangle=" << height * base / 2 << endl;
                    break;

                case 5:
                    cout << "Area of Cylinder" << endl;

                    cout << "Enter the Radius Cylinder=" << endl;
                    cin >> r;

                    cout << "Enter the Height of Cylinder=" << endl;
                    cin >> height;

                    cout << "Area of cylinder=" << 2 * 3.14 * r * height + 2 * 3.14 * r * r << endl;
                    break;

                default:
                    break;
                }
                cout << "Do you want to Continue the Process! " << endl;
                cin >> ch;
            } while (ch == 'y' || ch == 'Y');

        case 3:
            cout << "Radius" << endl;
            cout << "Enter the Circumfrence for calculating the radius of Circle" << endl;
            cin >> c;
            cout << "Radius of Circle is=" << c / 2 * 3.14 << endl;
            break;
            

        case 4:
            do
            {
                cout << "\t\t\t\t\tVolume" << endl;
                cout << "1.Volume of Sphere\n2.Volume of Cone\n3.Volume of Cylinder" << endl;
                cout << "Enter your Choice" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1:

                    cout << "Volume of Sphere" << endl;
                    cout << "Enter the Radius=" << endl;
                    cin >> r;
                    cout << "Volume of Sphere is=" << 4 / 3 * 3.14 * r * r * r << endl;
                    break;

                case 2:
                    cout << "\t\t\t\t\tVolume of Cone" << endl;
                    cout << "Enter the Radius Cone=" << endl;
                    cin >> r;
                    cout << "Enter the height Cone=" << endl;
                    cin >> height;
                    cout << "Volume of Cone is =" << 3.14 * r * r * (height / 3) << endl;
                    break;
                case 3:
                    cout << "\t\t\t\t\tVolume of Cylinder" << endl;
                    cout << "Enter the Radius of Cylinder=" << endl;
                    cin >> r;
                    cout << "Enter the Hieght of Cylinder=" << endl;
                    cin >> height;
                    cout << "Volume of cylinder=" << 3.14 * r * r * height << endl;
                    break;

                default:
                    break;
                }
                cout << "Do you want to Continue the Process! " << endl;
                cin >> ch;
            } while (ch == 'y' || ch == 'Y');

        default:
            break;
        }
        cout << "Do you want to Continue the Process! " << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}