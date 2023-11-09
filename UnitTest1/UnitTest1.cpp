#include "pch.h"
#include "CppUnitTest.h"
#include "../laber71/laber71.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
  
        // Тест для перевірки обчислення суми і кількості елементів, що задовольняють умові
        TEST_METHOD(TestCalc)
        {
            const int rowCount = 7;
            const int colCount = 6;
            int** matrix = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
                matrix[i] = new int[colCount];

            // Заповнюємо матрицю значеннями
            matrix[0][0] = 3; matrix[0][1] = 8; matrix[0][2] = 2; matrix[0][3] = 5; matrix[0][4] = 6; matrix[0][5] = 9;
            matrix[1][0] = 1; matrix[1][1] = 7; matrix[1][2] = 4; matrix[1][3] = 6; matrix[1][4] = 2; matrix[1][5] = 8;
            matrix[2][0] = 3; matrix[2][1] = 8; matrix[2][2] = 2; matrix[2][3] = 5; matrix[2][4] = 6; matrix[2][5] = 9;
            matrix[3][0] = 1; matrix[3][1] = 7; matrix[3][2] = 4; matrix[3][3] = 6; matrix[3][4] = 2; matrix[3][5] = 8;
            matrix[4][0] = 3; matrix[4][1] = 8; matrix[4][2] = 2; matrix[4][3] = 5; matrix[4][4] = 6; matrix[4][5] = 9;
            matrix[5][0] = 1; matrix[5][1] = 7; matrix[5][2] = 4; matrix[5][3] = 6; matrix[5][4] = 2; matrix[5][5] = 8;
            matrix[6][0] = 3; matrix[6][1] = 8; matrix[6][2] = 2; matrix[6][3] = 5; matrix[6][4] = 6; matrix[6][5] = 9;

            int S = 0;
            int k = 0;
            Calc(matrix, rowCount, colCount, S, k);

            // Перевірка суми і кількості елементів, що задовольняють умові
            Assert::AreEqual(92, S); // Очікувана сума
            Assert::AreEqual(18, k); // Очікувана кількість

            // Звільнення пам'яті
            for (int i = 0; i < rowCount; i++)
                delete[] matrix[i];
            delete[] matrix;
        }
    };
}