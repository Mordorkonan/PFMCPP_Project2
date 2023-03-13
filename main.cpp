#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 short
 float
 double
 bool
 char
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int area = 12;
    int height = 4;
    int width = 3;

    short age = 13;
    short aptNo = 32;
    short weight = 40;

    float radius = 3.2f;
    float length = 0.9f;
    float circumference = 44.44f;

    double distance = 12.0;
    double saturation = 65537.0;
    double lightSpeed = 300000000.0;

    bool isOpen = false;
    bool setReady = false;
    bool isAlive = true;

    char r = 'r';
    char d = 'd';
    char s = 's';
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(area, height, width,
                 age, aptNo, weight,
                 radius, length, circumference,
                 distance, saturation, lightSpeed,
                 isOpen, setReady, isAlive,
                 r, d, s);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool buyADrink(float drinkPrice, bool applyDiscount = false)
{
    ignoreUnused(drinkPrice, applyDiscount);
    return {};
}
/*
 2)
 */
void drawLinearFunctionFromOriginToCoords(int limitX, int limitY, int limitZ = 0)
{
    ignoreUnused(limitX, limitY, limitZ);
}
/*
 3)
 */
void transferLuggage(char floor, short roomNumber, bool useElevator = false)
{
    ignoreUnused(floor, roomNumber, useElevator);
}
/*
 4)
 */
void crossTheDistance(short speed, float requiredDistance)
{
    ignoreUnused(speed, requiredDistance);
}
/*
 5)
 */
void changeState(bool binaryState, float delay = 0.33f)
{
    ignoreUnused(binaryState, delay);
}
/*
 6)
 */
bool stateIsChangedTo(bool binaryState)
{
    ignoreUnused(binaryState);
    return {};
}
/*
 7)
 */
double getLicenceNumberFromLibrary(bool withExtraCode = false)
{
    ignoreUnused();
    return {};
}
/*
 8)
 */
unsigned short int getAmplitudeMultiplierAfterNormalization(unsigned short int currentAmplitude, unsigned short int targetAmplitude)
{
    ignoreUnused(currentAmplitude, targetAmplitude);
    return {};
}
/*
 9)
 */
char copySecondCharFromString(int StringNumber, char defaultSymbol = 'a')
{
    ignoreUnused(StringNumber, defaultSymbol);
    return {};
}
/*
 10)
 */
unsigned long int calculateCountryArea(double countryID)
{
    ignoreUnused(countryID);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto drinkBought = buyADrink(1.5f, true);
    //2)
    drawLinearFunctionFromOriginToCoords(3, 3);
    //3)
    transferLuggage(3, 345);
    //4)
    crossTheDistance(8, 24.4f);
    //5)
    changeState(false, 0.55f);
    //6)
    auto toggleChecked = stateIsChangedTo(false);
    //7)
    auto licenceNumber = getLicenceNumberFromLibrary(true);
    //8)
    auto amplitudeMultiplier = getAmplitudeMultiplierAfterNormalization(10, 12);
    //9)
    auto requestedChar = copySecondCharFromString(4);
    //10)
    auto requestedArea = calculateCountryArea(12143488.0212);
    
    ignoreUnused(carRented);
    ignoreUnused(drinkBought);
    ignoreUnused(toggleChecked);
    ignoreUnused(licenceNumber);
    ignoreUnused(amplitudeMultiplier);
    ignoreUnused(requestedChar);
    ignoreUnused(requestedArea);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
