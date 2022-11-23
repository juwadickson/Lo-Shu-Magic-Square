#include <iostream>
using namespace std;

// Program to Generate a Magic Square

// fUNCTION TO FILL ARRAY
void fillArray(int array_row1[],int array_row2[],int array_row3[], int size) {
    int user_input;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter the number for row " << i << " col " << j << " :";
            cin >> user_input;
            if (i == 0)
            {
                array_row1[j] = user_input;
            }
            else if (i == 1)
            {
                array_row2[j] = user_input;
            }else{
                array_row3[j] = user_input;
            }    
        }
        
    }
}
int showArray(int array_row1[],int array_row2[],int array_row3[], int size ){
    for (int i = 0; i < size; i++)
    {
        cout << array_row1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << array_row2[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << array_row3[i] << " ";
    }
    return 0;
}
bool checkRange(int array_row1[],int array_row2[],int array_row3[],int size,int min, int max){
    
    for (int i = 0; i < size; i++)
    {
        if (array_row1[i] < min || array_row1[i] > max || array_row2[i] < min || array_row2[i] > max || array_row3[i] < min || array_row3[i] > max)
        {
            return false;
        }else{
            return true;
        }
    }
}
bool checkUnique(int array_row1[],int array_row2[],int array_row3[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(array_row1[i] == array_row2[j] || array_row1[i] == array_row3[k] || array_row2[j] == array_row3[k]){
                    return false;
                }else{
                    return true;
                }
            }
            
        }
        
    }   
}
bool checkColSum(int array_row1[],int array_row2[],int array_row3[], int size){
    int sumCol1, sumCol2, sumCol3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 0 && j == 0 && k == 0){
                    sumCol1 = array_row1[i] + array_row2[i] + array_row3[i];
                }
                if(i == 1 && j == 1 && k == 1){
                    sumCol2 = array_row1[i] + array_row2[i] + array_row3[i];
                }
                if(i == 2 && j == 2 && k == 2){
                    sumCol3 = array_row1[i] + array_row2[i] + array_row3[i];
                }
            }
        }
    }
    if (sumCol1 == sumCol2 && sumCol2 == sumCol3 && sumCol1 == sumCol3)
    {
        return true;
    }else{
        return false;
    }
    
    
}
bool checkRowSum(int array_row1[],int array_row2[],int array_row3[], int size){
    int sumRow1 = 0;
    int sumRow2 = 0;
    int sumRow3 = 0;
    for (int i = 0; i < size; i++)
    {
        sumRow1 += array_row1[i];
    }
    for (int j = 0; j < size; j++)
    {
        sumRow2 += array_row2[j];
    }
    for (int k = 0; k < size; k++)
    {
        sumRow3 += array_row3[k];
    }
   
    if(sumRow1 == sumRow2 && sumRow1 == sumRow3 && sumRow2 == sumRow3){
        return true;
    }else{
        return false;
    }
    
    
}
bool checkDiagonalSum(int array_row1[],int array_row2[],int array_row3[],int size){
    int sumDiagonal1, sumDiagonal2;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 0 && j == 1 && k == 2){
                    sumDiagonal1 = array_row1[i]  + array_row2[j] + array_row3[k];
                }else if (i == 2 && j == 1 && k == 0)
                {
                    sumDiagonal2 = array_row1[i]  + array_row2[j] + array_row3[k];
                }
                
            }
        }
    }
    if (sumDiagonal1 == sumDiagonal2)
    {
        return true;
    }else{
        return false;
    }
    
    
}


int row1_sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int row2_sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int row3_sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int col1_sum(int arr1[], int arr2[], int arr3[], int size){
    int sumCol1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 0 && j == 0 && k == 0){
                    sumCol1 = arr1[i] + arr2[j] + arr3[k];
                }
            }
        }
    }
    return sumCol1;
}
int col2_sum(int arr1[], int arr2[], int arr3[], int size){
    int sumCol2;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 1 && j == 1 && k == 1){
                    sumCol2 = arr1[i] + arr2[j] + arr3[k];
                }
            }
        }
    }
    return sumCol2;
}
int col3_sum(int arr1[], int arr2[], int arr3[], int size){
    int sumCol3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 2 && j == 2 && k == 2){
                    sumCol3 = arr1[i] + arr2[j] + arr3[k];
                }
            }
        }
    }
    return sumCol3;
}

int diagonal1_Value(int arr1[],int arr2[],int arr3[],int size){
    int sumDiagonal1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if(i == 0 && j == 1 && k == 2){
                    sumDiagonal1 = arr1[i]  + arr2[j] + arr3[k];
                }
                
            }
        }
    }
    return sumDiagonal1;
}
int diagonal2_Value(int arr1[],int arr2[],int arr3[],int size){
    int sumDiagonal2;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (i == 2 && j == 1 && k == 0)
                {
                    sumDiagonal2 = arr1[i]  + arr2[j] + arr3[k];
                }
                
            }
        }
    }
    return sumDiagonal2;
}


int main() {

    int MIN = 1;
    int MAX = 9;
    int COLS = 3;
    int ROWS = 3;
    
    int user_input;

    char answer;
    bool try_again = true;

    int array_row1[COLS], array_row2[COLS], array_row3[COLS];


    while (try_again)
    {
        
        // Ask user to enter values for array
        fillArray(array_row1,array_row2,array_row3,COLS);

        
        int R1 = row1_sum(array_row1, COLS);
        int R2 = row2_sum(array_row2, COLS);
        int R3 = row3_sum(array_row3, COLS);
        int C1 = col1_sum(array_row1,array_row2,array_row3, COLS);
        int C2 = col2_sum(array_row1,array_row2,array_row3, COLS);
        int C3 = col3_sum(array_row1,array_row2,array_row3, COLS);
        int D1 = diagonal1_Value(array_row1,array_row2,array_row3, COLS);
        int D2 = diagonal2_Value(array_row1,array_row2,array_row3, COLS);

        if(checkRange(array_row1,array_row2,array_row3,COLS,MIN,MAX) == false ||  checkUnique(array_row1,array_row2,array_row3,COLS) == false || checkColSum(array_row1,array_row2,array_row3,COLS) == false || checkRowSum(array_row1,array_row2,array_row3,COLS) == false || checkDiagonalSum(array_row1,array_row2,array_row3,COLS) == false)
        {
            showArray(array_row1,array_row2,array_row3,COLS);
            cout << "\n\n\nThis is not a lo Shu Magic Square";
            cout << "\n do you want to try again y or n :";
            cin >> answer;
            if(answer == 'y'){
                try_again = true;
            }
            else if (answer == 'n')
            {
                cout << "Name: \nProject: \nDue Date:";
                try_again = false;
            }else{
                cout << "Name: \nProject: \nDue Date:";
                try_again = false;
            }
            
        }
        else if(R1 == R2 && R1 == R3 && R1 == C1 && R1 == C2 && R1 == C3 && R1 == D1 && R1 == D2)
        {
            showArray(array_row1,array_row2,array_row3,COLS);
            cout << "\n\n\nThis is a Lo Shu Magic Square";
            cout << "\n do you want to try again y or n :";
            cin >> answer;
            if(answer == 'y'){
                try_again = true;
            }
            else if (answer == 'n')
            {
                cout << "Name: \nProject: \nDue Date:";
                try_again = false;
            }else{
                cout << "Name: \nProject: \nDue Date:";
                try_again = false;
            }
        }

    }
    
    return 0;
}