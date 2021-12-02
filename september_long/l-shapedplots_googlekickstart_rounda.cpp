#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int rows,columns;
        cin >> rows >> columns;
        int matrix[rows][columns];
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                cin >> matrix[i][j];
            }
        }
        std::cout << "Case #" << i+1 << ": ";
        int count=0;//final answer
        int l_detected=0;
        
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                int l_row_check=0;
                int l_column_check=0;   
                bool isL;     
                if(matrix[i][j]==1)
                {
                    for(int m=i; m<rows && matrix[m][j]==1; m++)
                    {
                        l_row_check++;    
                    }
                    for(int m=j; m<columns && matrix[i][m]==1; m++)
                    {
                        l_column_check++;
                    }
                    if(l_column_check!=l_row_check)
                    {
                        isL=true;
                    }
                    if(isL==true)
                    {
                        if(matrix[i][j+1]==1 && matrix[i+1][j]==1)
                        {
                            int seq_row=0,seq_column=0; // calculate no. of 1's in rows and columns of L
                            for(int x=i+1; x<rows && matrix[x][j]==1; x++)
                            {
                                seq_row++;
                            }
                            for(int y=j+1; j<columns && matrix[i][y]==1; y++)
                            {
                                seq_column++;
                            }
                            l_detected++;
                            while(seq_column>1 && seq_row>1)
                            {
                                seq_column--;
                                seq_row--;
                                count ++;
                            }
                        }
                        if(matrix[i][j+1]==1 && matrix[i-1][j]==1)
                        {
                            int seq_row=0,seq_column=0; // calculate no. of 1's in rows and columns of L
                            for(int x=i; x>=0 && matrix[x][j]==1; x--)
                            {
                                seq_row++;
                            }
                            for(int y=j+1; j<columns && matrix[i][y]==1; y++)
                            {
                                seq_column++;
                            }
                            l_detected++;
                            while(seq_column>1 && seq_row>1)
                            {
                                seq_column--;
                                seq_row--;
                                count ++;
                            }
                        }
                        if(matrix[i][j-1]==1 && matrix[i+1][j]==1)
                        {
                            int seq_row=0,seq_column=0; // calculate no. of 1's in rows and columns of L
                            for(int x=i+1; x<rows && matrix[x][j]==1; x++)
                            {
                                seq_row++;
                            }
                            for(int y=j; j>=0 && matrix[i][y]==1; y--)
                            {
                                seq_column++;
                            }
                            l_detected++;
                            while(seq_column>1 && seq_row>1)
                            {
                                seq_column--;
                                seq_row--;
                                count ++;
                            }
                        }
                        if(matrix[i][j-1]==1 && matrix[i-1][j]==1)
                        {
                            int seq_row=0,seq_column=0; // calculate no. of 1's in rows and columns of L
                            for(int x=i; x>=0 && matrix[x][j]==1; x--)
                            {
                                seq_row++;
                            }
                            for(int y=j; j>=0 && matrix[i][y]==1; y--)
                            {
                                seq_column++;
                            }
                            l_detected++;
                            while(seq_column>1 && seq_row>1)
                            {
                                seq_column--;
                                seq_row--;
                                count ++;
                            }
                        }
                    }
                }
            }
        }
        std::cout << "L detected: "<< l_detected << endl;
        std::cout << count << endl;
    }
    return 0;
}