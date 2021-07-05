#include <iostream>
using namespace std;

class Counter
{
	private:
  		int count ;
  		int step;
	public:
	    Counter(): count(0),step(0)
	    {

	    }
  		void setIncrementStep(int step_val)
  		{
  		    step = step_val;
  		}

  		int getCount()
  		{
  		    return count;
  		}

  		void increment()
  		{
  		    count += step;
  		}

  		void resetCount()
  		{
  		    count = 0;
  		}
};

int main()
{
	Counter cnt;

	cnt.getCount();
	cout<<"Enter how many steps you want to increase :";
	int step;
	cin>> step;
	cnt.setIncrementStep(step);
	cnt.increment();
	cout << "After Increment : " << cnt.getCount() << endl;
	cnt.increment();
	cout << "After incerement : " << cnt.getCount() << endl;
	cnt.resetCount();
	cout<<"Reset :"<<cnt.getCount() << endl;

	return 0;
}
