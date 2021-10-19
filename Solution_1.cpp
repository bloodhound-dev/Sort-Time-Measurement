#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

 long int values[10000000],i;
void start_test(int n)
{
    cout<<"START: Sort Testing for array of size..............: "<<n<<endl;
}

void stop_test(int n)
{
    cout<<"COMPLETED: Sort Testing for array of size..........: "<<n<<endl;
}

void display()
{
    cout<<"+--------------+"<<endl;
    cout<<"|TEST NAME\t|"<<endl;
}

void line()
{
    cout<<"+--------------+--------------+--------------+--------------+--------------+"
    <<"--------------+--------------+--------------+--------------+--------------+--------------+"<<endl;
}
// function for 100,000 random elements in array
int hundred_thousand_random()
{
	    vector<int> values(100000);
    	// generate random values
	    auto f = []() -> int { return rand() % 100000; };
	    // Fill up the vector
    	generate(values.begin(), values.end(), f);
	    // Get starting timepoint
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values.begin(), values.end());

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 100,000 ordered elements in array
int hundred_thousand_ordered()
{
    // values[100000];
        for(i=1;i<=100000;i++)
        {
            values[i]=i;
        }
        int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 100,000 reverse elements in array
int hundred_thousand_rev()
{

        for(i=100000;i>=1;i--)
        {
            values[i]=i;
        }
	    int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 1,000,000 random elements in array
int mil_random()
{
	    vector<int> values(1000000);
    	// generate random values
	    auto f = []() -> int { return rand() % 1000000; };
	    // Fill up the vector
    	generate(values.begin(), values.end(), f);
	    // Get starting timepoint
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values.begin(), values.end());

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 1,000,000 ordered elements in array
int mil_ordered()
{
     //values[1000000];

        for(i=1;i<=1000000;i++)
        {
            values[i]=i;
        }

        int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 1,000,000 reverse elements in array
int mil_rev()
{
    //int values[1000000];
        for(i=1000000;i>=1;i--)
        {
            values[i]=i;
        }
	    int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 10,000,000 random elements in array
int ten_mil_random()
{

	    vector<int> values(10000000);
    	// generate random values
	    auto f = []() -> int { return rand() % 10000000; };
	    // Fill up the vector
    	generate(values.begin(), values.end(), f);
	    // Get starting timepoint
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values.begin(), values.end());

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();


}
// function for 10,000,000 ordered elements in array
int ten_mil_ordered()
{
    //int values[10000000];
        for(i=1;i<=10000000;i++)
        {
            values[i]=i;
        }
        int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}
// function for 10,000,000 reverse elements in array
int ten_mil_rev()
{
    //int values[10000000];
        for(i=10000000;i>=1;i--)
        {
            values[i]=i;
        }
	    int n = sizeof(values)/sizeof(values[0]);
	    auto start = high_resolution_clock::now();

	    // Call the function, here sort()
	    sort(values, values+n);

	    // Get ending timepoint
	    auto stop = high_resolution_clock::now();
	    auto duration = duration_cast<milliseconds>(stop - start);

	    return duration.count();

}


int main()
{
    //dur time_ms,time_ms2,time_ms3;
    int hundred_random[10],hundred_ordered[10],hundred_reverse[10];
    int million_random[10],million_ordered[10],million_reverse[10];
    int ten_million_random[10],ten_million_ordered[10],ten_million_reverse[10];
    start_test(100000);
    for(int i=1;i<=10;i++)
    {
        hundred_random[i]=hundred_thousand_random();
        hundred_ordered[i]=hundred_thousand_ordered();
        hundred_reverse[i]=hundred_thousand_rev();
    }
    stop_test(100000);

    start_test(1000000);
    for(int i=1;i<=10;i++)
    {
        million_random[i]=mil_random();

        million_ordered[i]=mil_ordered();

        million_reverse[i]=mil_rev();

    }
    stop_test(1000000);

    start_test(10000000);
    for(int i=1;i<=10;i++)
    {
        ten_million_random[i]=ten_mil_random();
        ten_million_ordered[i]=ten_mil_ordered();
        ten_million_reverse[i]=ten_mil_rev();
    }
    stop_test(10000000);
    cout<<"=================Printing Sort Result (in milliseconds) for 10 Arrays of size 100,000 each================="<<endl;
    display();
    line();
    cout<<"|RANDOM \t|";
    for(int i=1;i<=10;i++){
        cout<<hundred_random[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|ORDERED\t|";
    for(int i=1;i<=10;i++){
        cout<<hundred_ordered[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|REVERSE\t|";
    for(int i=1;i<=10;i++){
        cout<<hundred_reverse[i]<<"ms\t|";
    }
    cout<<endl;
    line();
    cout<<"=================Printing Sort Result (in milliseconds) for 10 Arrays of size 1,000,000 each================="<<endl;
    display();
    line();
    cout<<"|RANDOM \t|";
    for(int i=1;i<=10;i++){
        cout<<million_random[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|ORDERED\t|";
    for(int i=1;i<=10;i++){
        cout<<million_ordered[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|REVERSE\t|";
    for(int i=1;i<=10;i++){
        cout<<million_reverse[i]<<"ms\t|";
    }
    cout<<endl;
    line();
    cout<<"=================Printing Sort Result (in milliseconds) for 10 Arrays of size 1,000,000 each================="<<endl;
    display();
    line();
    cout<<"|RANDOM \t|";
    for(int i=1;i<=10;i++){
        cout<<ten_million_random[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|ORDERED\t|";
    for(int i=1;i<=10;i++){
        cout<<ten_million_ordered[i]<<"ms\t|";
    }
    cout<<endl;
    cout<<"|REVERSE\t|";
    for(int i=1;i<=10;i++){
        cout<<ten_million_reverse[i]<<"ms\t|";
    }
    cout<<endl;
    line();
	return 0;
}
