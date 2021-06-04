#include <iostream>
using namespace std;

void swap(int a[], int i, int j)
{
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

double fknapsack(int profit[], int weight[], int W, int n)
{

  int pw[n];

  for (int i = 0; i < n; i++)
  {
    pw[i] = profit[i] / weight[i];
  }

  // sorting the p/w in decsending order
  for (int i = 0; i < n; i++)
  {
    int max = i;
    for (int j = i + 1; j < n; j++)
    {
      if (pw[j] > pw[max])
        max = j;
    }
    swap(pw, i, max);
    swap(profit, i, max);
    swap(weight, i, max);
  }
  int i;
  double maxprofit = 0;
  for (i = 0; i < n; i++)
  {
    if (weight[i] > W)
    {
      break;
    }

    W -= weight[i];
    maxprofit += (double)(profit[i]);
  }

  if (W == 0)
    return maxprofit;

  double lastprofit = profit[i];
  double lastweight = weight[i];

  maxprofit += (lastprofit / lastweight) * W;
  return maxprofit;
}

int main()
{

  cout << "Sheikh Saifuddin Ahmed" << endl;
  cout << "0832CS191161" << endl;
  int n;
  cout << "enter number of items : ";
  cin >> n;
  int profit[n];
  // ={60,100,120};
  int weight[n];
  // ={10,20,30};
  cout << "enter profits of items : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> profit[i];
  }
  cout << "enter weight of items : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }
  cout << "enter W : ";

  int W;
  cin >> W;
  cout << "Maximum profit : " << fknapsack(profit, weight, W, n);
  return 0;
}
