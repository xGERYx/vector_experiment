#include <iostream>
#include <vector>

int rows = 0;
int question = 0;
int q_row = 0;
int q_num = 0;
int num_numbers = 0;
int s = 0;
std::vector<std::vector<int>> vec;
std::vector<int> vec1;

int main() {

    std::cout << "Input the number of rows and questions: " << std::endl;
    std::cin >> rows >> question;

    for (int i = 0; i < rows; i++)
    {
        std::cout << "Input the numbers: " << std::endl;
        std::cin >> num_numbers;
        std::cout << " - " << std::endl;

        for (int k = 0; k < num_numbers; k++)
        {
            std::cin >> s;

            vec1.push_back({s});
        }

        vec.push_back({vec1});
        vec1.clear();
    }

    for (int m = 0; m < question; m++)
    {
        std::cout << "Input the question: " << std::endl;
        std::cin >> q_row >> q_num;

        std::cout << vec[q_row][q_num] << std::endl;
    }

    return 0;
}
