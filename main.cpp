#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[],int end[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
           {
               swap(&arr[j], &arr[j+1]);
               swap(&end[j], &end[j+1]);
           }

}

int main()
{
    int all_walk = 0;

    int floor;
    int person;
    cin >> floor;
    cin >> person;

    int people_start[person];
    int people_end[person];
    for(int i=0;i<person;i++)
    {
        cin >> people_start[i];
        cin >> people_end[i];
    }
    bubbleSort(people_start,people_end,person);
    /*for(int i=0;i<person;i++)
    {
        cout << endl << people_start[i] << '\t' << people_end[i] << endl;
    }*/

    for(int i=0;i<person;i++)
    {
        if(all_walk < 0)
        {
            all_walk *= (-1);
        }
        if(people_start[i] > people_end[i])
        {
            all_walk += (people_start[i] - people_end[i]);
            /*if((i+1) == person)
            {
                break;
            }*/
            all_walk += (people_start[i + 1] - people_end[i]);
        }
        if(people_start[i] < people_end[i])
        {
            all_walk += people_start[i];
            all_walk += (people_start[i + 1] - people_start[i]);
        }
        cout << i << " : " << all_walk << endl;
    }
    all_walk += (floor - 1 - people_end[person - 1]);
    cout << all_walk;
    return 0;
}
