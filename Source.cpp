#include <iostream>
bool arythmeticprogression(int *, int );
void notprogression(int *, int  );
int main()
{
	constexpr int length{ 10 };
	int arr[length]{1,2,3,4,5,6,7,8,9,10};
	
	if (arythmeticprogression(arr, length)) {
		std::cout << "Progression\n";
		std::cout << "Step is: " << arr[1] - arr[0] << std::endl;
	}
	else
	{
		std::cout << "Not progression\n";
		notprogression(arr, length);
		
	}
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i]<<" ";
	}
}
bool arythmeticprogression(int *arr, int length)
{
	if (length < 3)
	{
		return false;
	}
	int dif = arr[1] - arr[0];

	for (int i = 2; i < length; i++)
	{
		if ((arr[i] - arr[i - 1]) != dif)
		{
			return false;

		}

	}
	return true;
}
void notprogression(int* arr, int length)
{
	int min = arr[0];
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = min;
		}

	}
	std::cout << min << std::endl;
}


