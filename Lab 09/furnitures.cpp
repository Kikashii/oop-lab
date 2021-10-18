#include <iostream>
#include <string>
using namespace std;

enum class Material
{
    Wood,
    Board,
    Steel,
    foam
};

class Furniture
{
protected:
    double price;
    double discount;
    string productName;
    Material madeof;

public:
    Furniture(double p = 0, double d = 0, string str = "", Material m = Material::Wood) : price(p), discount(d), productName(str), madeof(m)
    {
    }
    void setPrice(double val)
    {
        if (val > 0)
            price = val;
    }
    void setDiscount(double val)
    {
        if (val <= price)
            discount = val;
    }
    void setDiscountPercentage(double val)
    {
        setDiscount(price * val / 100);
        //discount = price * val / 100;
    }
    void setMadeof(Material val)
    {
        madeof = val;
    }
    double getDiscount(void)
    {
        return discount;
    }
    double getDiscountedPrice(void)
    {
        return price - discount;
    }
    string getMadeof()
    {
        if (madeof == Material::Wood)
            return string("Wood");
        else if (madeof == Material::Board)
            return string("Board");
        else if (madeof == Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    void details(void)
    {
        cout << "Product Name: " << productName << endl;
        cout << "Regular Price: " << price << endl;
        cout << "Discounted Price: " << getDiscountedPrice() << endl;
        cout << "Material: " << getMadeof() << endl;
    }
    virtual void productDetails() = 0;
};

enum class BedSize
{
    Single,
    SemiDouble,
    Double
};

class Bed : public Furniture
{
private:
    BedSize bed_Size;

public:
    Bed(double p = 0, double d = 0, string str = "", Material m = Material::Wood, BedSize b = BedSize::Single) : Furniture(p, d, str, m), bed_Size(b)
    {
    }
    void setBedSize(BedSize b)
    {
        bed_Size = b;
    }
    string getBedSize(void)
    {
        if (bed_Size == BedSize::Single)
            return string("Single");
        else if (bed_Size == BedSize::SemiDouble)
            return string("SemiDouble");
        else if (bed_Size == BedSize::Double)
            return string("Double");
        else
            return string("");
    }
    void productDetails()
    {
        details();
        cout << "Bed Size: " << getBedSize() << endl
             << endl;
    }
};

enum class SeatNumber
{
    One,
    Two,
    Three,
    Four,
    Five
};

class Sofa : public Furniture
{
private:
    SeatNumber seat_num;

public:
    Sofa(double p = 0, double d = 0, string str = "", Material m = Material::Wood, SeatNumber s = SeatNumber::One) : Furniture(p, d, str, m), seat_num(s)
    {
    }
    void setSeatNum(SeatNumber s)
    {
        seat_num = s;
    }
    string getSeatNum(void)
    {
        if (seat_num == SeatNumber::One)
            return string("One");
        else if (seat_num == SeatNumber::Two)
            return string("Two");
        else if (seat_num == SeatNumber::Three)
            return string("Three");
        else if (seat_num == SeatNumber::Four)
            return string("Four");
        else if (seat_num == SeatNumber::Five)
            return string("Five");
        else
            return string("");
    }
    void productDetails()
    {
        details();
        cout << "Seat Number: " << getSeatNum() << endl
             << endl;
    }
};

enum class Door
{
    Two,
    Three,
    Four
};

class Almirah : public Furniture
{
private:
    Door door_num;

public:
    Almirah(double p = 0, double d = 0, string str = "", Material m = Material::Wood, Door n = Door::Two) : Furniture(p, d, str, m), door_num(n)
    {
    }
    void setDoortNum(Door d)
    {
        door_num = d;
    }
    string getDoorNum(void)
    {
        if (door_num == Door::Two)
            return string("Two");
        else if (door_num == Door::Three)
            return string("Three");
        else if (door_num == Door::Four)
            return string("Four");
        else
            return string("");
    }
    void productDetails()
    {
        details();
        cout << "Door Number: " << getDoorNum() << endl
             << endl;
    }
};

/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/
void order(Furniture **f1, Furniture **f2)
{
    if ((*f1)->getDiscountedPrice() < (*f2)->getDiscountedPrice())
    {
        Furniture *temp = *f1;
        *f1 = *f2;
        *f2 = temp;
    }
}

void sort_furniture_discount(Furniture *furnitures[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            order(furnitures + i, furnitures + j);
        }
    }
}

int main()
{
    Furniture *f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000, 123, "Bahari Bed", Material::Wood, BedSize::Single);
    f_list[1] = new Sofa(11000, 234, "Bahari Sofa", Material::Steel, SeatNumber::Five);
    f_list[2] = new Almirah(13000, 345, "Bahari Almirah", Material::Wood, Door::Two);
    f_list[3] = new Bed(10090, 123, "Luxury Bed", Material::Wood, BedSize::Single);

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    f_list[2]->setDiscountPercentage(30);
    cout << "Unsorted list:\n";
    for (int i = 0; i < 4; i++)
    {
        f_list[i]->productDetails();
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list, 4);
    cout << "Sorted list:\n";
    for (int i = 0; i < 4; i++)
    {
        f_list[i]->productDetails();
    }

    f_list[0]->setDiscount(f_list[0]->getDiscount() + 50);
    f_list[1]->setDiscount(50);
    /**task 4 ends here*/
}
