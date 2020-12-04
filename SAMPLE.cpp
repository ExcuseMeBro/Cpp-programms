#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

void bubble(int* arr,int size)
{
  ofstream fout("mas1.txt");
  int C = 0;
  int M = 0;
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      C++;
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        M++;
        for (int k = 0; k < size; k++)
        {
          fout << arr[k]<<" ";
        }
        fout << "\n";
      }
    }
  }
  fout <<"M "<< M << " " << "C " << C << "\n";
  fout.close();
}
void insertion(int* arr, int size) 
{
  ofstream fout("mas2.txt");
  int C = 0;
  int M = 0;
  int temp;
  int item; 
  for (int i = 1; i < size; i++)
  {
    temp = arr[i]; 
    item = i - 1; 
    
    while (item >= 0 && arr[item] > temp) 
    {
      C += 2;
      M ++;
      arr[item + 1] = arr[item]; 
      arr[item] = temp;
      item--;
      for (int k = 0; k < size; k++)
      {
        fout << arr[k] << " ";
      }
      fout << "\n";
    }
  }
  fout << "M " << M << " " << "C " << C << "\n";
  fout.close();
}
void choice(int* arr, int size) 
{
  ofstream fout("mas3.txt");
  int C = 0;
  int M = 0;
  for (int i = 0; i < size; i++)
  {
    int temp = arr[0]; 
    for (int j = i + 1; j < size; j++)
    {
      C++;
      if (arr[i] > arr[j])
      {
        M++;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        for (int k = 0; k < size; k++)
        {
          fout << arr[k] << " ";
        }
        fout << "\n";
      }
    }

  }
  fout << "M " << M << " " << "C " << C << "\n";
  fout.close();
}
int main()
{
  ifstream fin;
  string fname;
  cout << "Enter file name:";
  cin >> fname;
  fin.open("fname54");
  int dim = 0;
  fin >> dim;
  int* mass1 = new int[dim];
  int* mass2 = new int[dim];
  int* mass3 = new int[dim];
  for (int i = 0; i < dim; i++)
  {
    fin >> mass1[i];
    mass2[i]=mass1[i];
    mass3[i] = mass1[i];
  }
  bubble(mass1, dim);
  for (int i=0;i<dim;i++)
  {
    cout << mass1[i] << "\n";
  }
  choice(mass2, dim);
  for (int i = 0; i < dim; i++)
  {
    cout << mass2[i] << "\n";
  }
  insertion(mass3, dim);
  for (int i = 0; i < dim; i++)
  {
    cout << mass3[i] << "\n";
  }
  return 1;
}