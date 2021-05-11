#ifndef Statistics_h
#define Statistucs_H

class Statistics
{
private:
    int* dataList;                  //Pointer to an array of integers
    int dataSize;                   //Number of elements that dataList has
    void sort();                    //Method to sort the elements of dataList
public:
    Statistics(int, int*);          //Constructor of the class
    ~Statistics();                  //Destructor of the class
    double average();               //Method to calculate the average of the array that dataList pointing to 
    int mode();                     //Method that calculate the frequency of a number in the array
    double median();                //Method that define the middle value of the array    
};

#endif // !Statitics_h


