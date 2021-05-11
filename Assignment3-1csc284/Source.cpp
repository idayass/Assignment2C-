//#include <iostream>
//
//using namespace std;
//
//class Statistics
//{
//private:
//    int* dataList;
//    int dataSize;
//    void sort();
//public:
//    Statistics(int n, int* data);
//    ~Statistics();
//    double average();
//    int mode();
//    double median();
//};
//
//
//Statistics::Statistics(int n, int* data)
//{
//
//    dataList = new int[n];
//    dataSize = n;
//
//    for (int i = 0; i < n; i++)
//        dataList[i] = data[i];
//}
//
//
//Statistics::~Statistics()
//{
//    delete dataList;
//}
//
//
//void Statistics::sort()
//{
//    int min;
//    for (int i = 0; i < dataSize - 1; i++)
//    {
//        min = i;
//        for (int j = i + 1; j < dataSize; j++)
//        {
//            if (dataList[j] < dataList[min])
//                min = j;
//        }
//
//        if (min != i)
//        {
//            int temp = dataList[i];
//            dataList[i] = dataList[min];
//            dataList[min] = temp;
//        }
//    }
//}
//
//
//double Statistics::average()
//{
//    double total = 0;
//
//    for (int i = 0; i < dataSize; i++)
//        total += dataList[i];
//
//    if (dataSize > 0)
//        return total / dataSize;
//    return 0;
//}
//
//
//int Statistics::mode()
//{
//    sort();
//    int mode_cnt = 0, mode, cnt = 0;
//    int i, j;
//
//    for (i = 0; i < dataSize - 1;)
//    {
//        cnt = 1;
//
//        for (j = i + 1; j < dataSize; j++)
//        {
//            if (dataList[j] == dataList[i])
//                cnt++;
//            else
//                break;
//        }
//
//
//        if (cnt > mode_cnt)
//        {
//            mode_cnt = cnt;
//            mode = dataList[i];
//        }
//
//        i = j;
//    }
//
//    if (mode_cnt > 1)
//        return mode;
//    return -1;
//}
//
//
//double Statistics::median()
//{
//    sort();
//    if (dataSize > 0)
//    {
//        if (dataSize % 2 == 0)
//            return((double)(dataList[dataSize / 2] + dataList[((dataSize - 1) / 2)])) / 2;
//        else
//            return dataList[(dataSize - 1) / 2];
//    }
//    else
//        return -1;
//}
//
//class MovieStatistics
//{
//public:
//    void movieStatistics();
//};
//
//
//void MovieStatistics::movieStatistics()
//{
//    int n;
//    int* data;
//
//    cout << "Enter the number of students surveyed: ";
//    cin >> n;
//    data = new int[n];
//
//    cout << "Enter the number of movies that each student saw: " << endl;
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter number of movies that student-" << (i + 1) << " saw: ";
//        cin >> data[i];
//    }
//
//    Statistics s(n, data);
//
//    cout << "Average: " << s.average() << endl;
//    cout << "Median: " << s.median() << endl;
//    cout << "Mode: " << s.mode() << endl;
//
//    delete data;
//}
//
//int main()
//{
//    MovieStatistics ms;
//    ms.movieStatistics();
//    return 0;
//}
