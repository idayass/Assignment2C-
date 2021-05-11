#include "Statistics.h"

/*
    Constructor : Statistics (update dataList and dataSize with the following parameters)
    Parameters  : size, list
*/
Statistics::Statistics(int size, int* list)
{

    dataList = new int[size];
    dataSize = size;

    for (int i = 0; i < size; i++)
        dataList[i] = list[i];
}


/*
    Detructor : ~Statistics (Destroys the Statistics Constructor)
*/
Statistics::~Statistics()
{
    delete dataList;
}

/*
    Function    : Sort() (Assending Sort of the array)
    Parameters  : None
    Return      : Void
*/
void Statistics::sort()
{
    int min;
    // Sort the array 
    for (int i = 0; i < dataSize - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < dataSize; j++)
        {
            if (dataList[j] < dataList[min])
                min = j;
        }
        // Last elements check 
        if (min != i)
        {
            int temp = dataList[i];
            dataList[i] = dataList[min];
            dataList[min] = temp;
        }
    }
}

/*
    Function    : average() (Calculate the average of the array that dataList points to)
    Parameters  : None
    Return      : The average of the array
*/
double Statistics::average()
{
    double total = 0;
    // Calculats the sum of the array 
    for (int i = 0; i < dataSize; i++)
        total += dataList[i];
    // check the size of the array being more than 0
    if (dataSize > 0)
        return total / dataSize;
    return 0;
}

/*
    Function    : Mode() (display the greatest frequency of a value occuring)
    Parameters  : None
    Return      : Mode 
*/
int Statistics::mode()
{
    sort();
    int mode_cnt = 0, mode, cnt = 0;
    int i, j;

    for (i = 0; i < dataSize - 1;)
    {
        cnt = 1;

        for (j = i + 1; j < dataSize; j++)
        {
            if (dataList[j] == dataList[i])
                cnt++;
            else
                break;
        }


        if (cnt > mode_cnt)
        {
            mode_cnt = cnt;
            mode = dataList[i];
        }

        i = j;
    }

    if (mode_cnt > 1)
        return mode;
    return -1;
}

/*
    Function    : :median() (display the middle value of the array)
    Parameters  : None
    Return      : median
*/
double Statistics::median()
{
    sort();                     // Sort the array that dataList is pointing to 
    if (dataSize > 0)
    {
        // Look for the middle of the array 
        if (dataSize % 2 == 0)
            return dataList[(dataSize - 1) / 2];
        else

            return dataList[int((dataSize / 2) + 0.5)];
    }
    else
        return -1;
}
