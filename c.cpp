#include <iostream>
#include <string>
#include <cmath>  

using namespace std;

//void sayHi(string name, int age);
/*
double cube (double num)
{
    //double result = num * num * num;
    return num * num * num;
}
*/
/*
int getMax(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
*/
/*
string getDayOfWeek(int dayNum)
{
    string dayName;
    
    switch (dayNum)
    {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Firday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }

    return dayName;
}
*/
/*
int power (int baseNum, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}
*/
/*
class Book {
    public:
        string title;
        string author;
        int pages;
        Book()
        {
            title = "no title";
            author = "no author";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};
*/
/*
class Student {
    public:
        string name;
        string major;
        double gpa;
        Student (string aName, string aMajor, double aGpa)
        {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors()
        {
            if (gpa >= 3.5)
            {
                return true;
            }
            return false;
        }
};
*/
/*
class Movie {
    private:
        string rating;
    public:
        string title;
        string director;

        Movie (string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating)
        {
            rating = aRating;
        
        }
};
*/

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    // string ///////////////////////////////////
    // string phrase = "Giraffe Academy";
    // string phrasesub;
    // phrasesub = phrase.substr(8, 3);
    // cout << phrase.length(); // phrase의 길이를 알려줌
    // cout << phrase.find("t", 0); // t가 0에서 부터 얼마나 떨어져있는지 찾아줌
    // cout << phrase.substr(8, 3); // 8부터 3개의 characters를 프린트
    // cout << phrasesub;


    // Math /////////////////////////////////////
    // cout << 10 % 3; //print the remainter

    // int wnum = 5;
    // double dnum = 5.5;

    // cout << pow(3,5);
    // cout << sqrt(36);
    // cout << round(4.3);
    // cout << round(4.6);
    // cout << ceil(4.1);
    // cout << floor(4.8);
    // cout << fmax(3,10); // find bigger number
    // cout << fmin(3,10); // find smaller number


    // input ///////////////////////////////////

    // int age;
    // cout << "Enter your age ";
    // cin >> age;

    // cout << "You are " << age << " years old";

    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name);

    // cout << "Hello " << name;


    // Building a calculator ///////////////////////////////////
    // double num1, num2;
    // cout << "Enter fisrt number: ";
    // cin >> num1;

    // cout << "Enter second number: ";
    // cin >> num2;

    // cout << num1 + num2;

    // Building a Mad Labs game ///////////////////////////////////

    // string color, pluralNoun, celebrity;

    // cout << "Enter a color: ";
    // getline(cin,color);
    // cout << "Enter a plural noun: ";
    // getline(cin,pluralNoun);
    // cout << "Enter a celebrity: ";
    // getline(cin,celebrity);

    // cout << "Roses are " << color << endl;
    // cout << pluralNoun << " are blue" << endl;
    // cout << "I love " << celebrity <<endl;
    

    // Array ///////////////////////////////////

    // int luckyNums[20] = {4, 8, 14, 16, 23, 42};
    // luckyNums[0] = 19;
    // cout << luckyNums[0];
    

    // Functions ///////////////////////////////////
    // sayHi("Mike",60);
    // sayHi("Tom",45);
    // sayHi("Steve",19);


   //return functions ///////////////////////////////
    // double answer = cube(5.0);
    // cout << answer;
    // cout << cube(5.0);

    //if statement ///////////////////////////////////
    // bool isMale = false;
    // bool isTall = false;

    // if (isMale && isTall) // if (isMale || isTall)
    // {
    //     cout << "You are a tall male";
    // }
    // else if (isMale && !isTall)
    // {
    //     cout << "You are a short male";
    // }
    // else if (!isMale && isTall)
    // {
    //     cout << "You are tall but not male";
    // }
    // else
    // {
    //     cout << "You are not male and not tall";
    // }

    // comparison ///////////////////////////////////
    // cout << getMax(200,200,10);

    //building a advanced calculator ////////////////
    // int num1, num2;
    // char op;

    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter operator: ";
    // cin >> op;
    // cout << "Enter second number: ";
    // cin >> num2;
    // int result;
    // if (op == '+')
    // {
    //     result = num1 + num2;
    // }
    // else if (op == '-')
    // {
    //     result = num1-num2;
    // }
    // else if (op == '/')
    // {
    //     result = num1/num2;
    // }
    // else if (op == '*')
    // {
    //     result = num1*num2;
    // }
    // else
    // {
    //     cout << "Invalid Operator";
    // }
    // cout << result;

    //switch statement ////////////////////////////
    // cout << getDayOfWeek(6);

    //loop ///////////////////////////////////////
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++; 
    // } while (i <= 5);

    // Building a game (guess num)
    // int secretNum = 7;
    // int guess;
    // int guessCount = 0;
    // int guessLimit = 3;
    // bool outOfGuesses = false;


    // while (guess != secretNum && !outOfGuesses)
    // {
    //     if (guessCount < guessLimit)
    //     {
    //         cout << "Enter guess: ";
    //         cin >> guess;
    //         guessCount++;
    //     }
    //     else
    //     {
    //         outOfGuesses = true;
    //     }
    // }

    // if (outOfGuesses)
    // {
    //     cout << "You Lose!";
    // }
    // else
    // {
    //     cout << "You Win!";
    // }

    // for loops /////////////////////////////////////

    // int nums[] = {1, 2, 5, 7, 3};
    // for (int i=0;i<5;i++)
    // {
    //     cout << nums[i] <<endl;
    // }

    // Exponent function /////////////////////////////
    // cout << power(4,2);


    //2D array & Nested for loop /////////////////////
    // int numberGrid[3][2] = {{1,2},
    //                         {3,4},
    //                         {5,6}
    //                     };
    // //cout << numberGrid[2][0];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << numberGrid[i][j];
    //     }
    //     cout << endl;
    // }

    // Pointers ///////////////////////////////////////
    // int age = 19;
    // int *pAge = &age;

    // double gpa = 2.7;
    // double *pGpa = &gpa;

    // string name = "Mike";
    // string *pName = &name;

    // cout << *pName;

    //Classes & objects //////////////////////////////

    // Book book1;
    // book1.title = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;

    // Book book2;
    // book1.title = "Lord of the Rings";
    // book1.author = "Tolkein";
    // book1.pages = 700;

    //constructor function ////////////////////////////
    // Book book1 ("Harry Potter", "JK Rowling", 500);
    // Book book2 ("Lord of the Rings", "Tolkein", 700);
    // Book book3;

    // cout << book3.title;

    //Object Functions ////////////////////////////////
    // Student student1 ("Jim", "Business", 2.4);
    // Student student2 ("Pam", "art", 3.6);

    // cout << student2.hasHonors();

    //Gatters & Setters//////////////////////
    // Movie avengers("The avengers", "Joss Whedon", "PH-13");
    // avengers.setRating("Dog");

    //Inheritance
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();


    return 0;
} 
/*
void sayHi(string name, int age)
{
    cout << "Hello " << name << "You are " << age << endl;
}
*/