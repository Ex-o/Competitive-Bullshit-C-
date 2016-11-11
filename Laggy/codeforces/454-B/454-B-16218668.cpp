#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_elements, first_elem;
    cin >> number_of_elements >> first_elem;

    bool inverted_before = false;

    int prev_element = first_elem;
    int index_of_first_inversion;
    int next_element;

    for(int i=1; i<number_of_elements; i++)
    {
        cin >> next_element;
        if(next_element < prev_element)
        {
            if(inverted_before == true)
            {
                printf("-1");
                return 0;
                //Stop Here()
            }
            inverted_before = true;
            index_of_first_inversion = i;
        }
        prev_element = next_element;
    }
    if(prev_element > first_elem && inverted_before == true) //First & Last [Not Included at above loop]
    {
        printf("-1");
        return 0;
    }

    if(inverted_before == false)
    { //Sorted by default
        printf("0");
    }
    else
    {
        printf("%d", number_of_elements - index_of_first_inversion);
    }
}