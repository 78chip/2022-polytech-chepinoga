#include <iostream>
using namespace std;

int** createArr(int m, int n)
{
    int** arr = new int* [m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    return arr;
}

void fillArr(int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << i << " row" << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printArr(int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void deleteArr(int** arr, int m)
{
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void matmul(int** a, int m_a, int n_a, int** b, int m_b, int n_b, int** c)
{
    for (int i = 0; i < m_a; i++)
    {
        for (int j = 0; j < n_b; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n_a; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

bool mateq(int** a, int m_a, int n_a, int** b, int m_b, int n_b)
{
    bool f = true;
    if (m_a != m_b || n_a != n_b)
    {
        return f = false;
    }
    else
    {
        for (int i = 0; i < m_a; i++)
        {
            for (int j = 0; j < n_a; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    return f = false;
                }
            }
        }
        return f = true;
    }
}
int main()
{
    int m_a = 2, n_a = 2;
    int** a = createArr(m_a, n_a);
    fillArr(a, m_a, n_a);
    int m_b = 2, n_b = 2;
    int** b = createArr(m_b, n_b);
    fillArr(b, m_b, n_b);
    int m_c = m_a, n_c = n_b;
    int** c = createArr(m_c, n_c);
    matmul(a, m_a, n_b, b, m_b, n_b, c);
    printArr(c, m_a, n_b);
    deleteArr(a, m_a);
    deleteArr(b, m_b);
    deleteArr(c, m_c);
    return 0;
}
