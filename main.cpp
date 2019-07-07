#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
void bubbleSort(int arr[],int num)
{
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{


    ofstream fileinput;
    srand(98765);
    fileinput.open("10.txt");
    int n=100000;
    int*arr=new int[num];

    for(int i=0;i<num;i++)
    {
        fileinput<<rand()<<endl;
        arr[i]=rand();
    }

    fileinput.close();

    clock_t startTime=clock();
    bubbleSort(arr,num);

    clock_t endTime=clock();

    ofstream fileoutput;
    fileoutput.open("output10k.txt");
    for(int i=0;i<100000;i++)
    {
        fileoutput<<arr[i]<<endl;
    }

    double timelapse=double (endTime-startTime)/CLOCKS_PER_SEC;
    cout<<"timelapse: "<<timelapse<<endl;
    fileoutput<<"timelapse: "<<timelapse<<endl;
    fileoutput.close();
    delete[] arr;
}
