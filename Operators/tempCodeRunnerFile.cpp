int circle()
    {
        using namespace std;
        double radius {};
        double pi {3.14};
        cout << "What is the radius of your circle ?: ";
        cin >> radius;
        double circumference{pow(3.14*radius,2)};
        cout << circumference;
    }