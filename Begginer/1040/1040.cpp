#include <iostream>
#include <iomanip>

int main()
{
    float score_1 = 0., score_2 = 0., score_3 = 0., score_4 = 0., score_exam = 0.;
    double score_avg = 0.;

    std::cin >> score_1 >> score_2 >> score_3 >> score_4;

    score_avg = (score_1 * 2 + score_2 * 3 + score_3 * 4 + score_4 * 1) / 10;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Media: " << score_avg << std::endl;

    if (score_avg >= 7.)
        std::cout << "Aluno aprovado." << std::endl;
    else if (score_avg < 5.)
        std::cout << "Aluno reprovado." << std::endl;
    else if (score_avg < 7. and score_avg >= 5.)
    {
        std::cout << "Aluno em exame." << std::endl;
        std::cin >> score_exam;
        std::cout << "Nota do exame: " << score_exam << std::endl;
        score_avg = (score_avg + score_exam) / 2;
        if (score_avg >= 5.)
            std::cout << "Aluno aprovado." << std::endl;
        else
            std::cout << "Aluno reprovado" << std::endl;
        std::cout << "Media final: " << score_avg << std::endl;
    }

    return 0;
}