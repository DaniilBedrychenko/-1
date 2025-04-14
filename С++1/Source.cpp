#include <iostream>
#include <locale>

using namespace std;













int main(const char* args[])
{
    setlocale(LC_ALL, "RUS");

    cout << "1. Пользователь вводит с клавиатуры время в секундах.Перевести это значение в дни, часы, минуты и секунды.\n";
    int seconds = 0;
    cout << "Введите секунды: ";
    cin >> seconds;
    int days = seconds / 86400;
    seconds %= 86400;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    cout << days << " - Days\n" << hours << " - Hours\n" << minutes << " - Minutes \n" << seconds % 60 << " - Seconds\n";



    cout << "2. Выполнить задачу, обратную предыдущей задаче.\n";
    int days2, hours2, minutes2;
    cout << "Введите дни, часы, минуты: ";
    cin >> days2 >> hours2 >> minutes2;
    cout << days2 * 86400 + hours2 * 3600 + minutes2 * 60 << " - seconds\n";



    cout << "\n3. Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать.Вычислить скорость, с которой ему нужно ехать.\n";
    double distance = 0;
    cout << "Введите расстояние: ";
    cin >> distance;
    double time = 0;
    cout << "Введите время: ";
    cin >> time;
    cout << "Speed: " << distance / time;



    cout << "\n\n4. Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора(часы, минуты и секунды).Посчитать стоимость разговора, если стоимость минуты составляет 30 копеек.\n";
    double seconds3, minutes3, hours3;
    double seconds4, minutes4, hours4;
    double check = 0;
    cout << "Введите время начала разговора (часы минуты секунды): ";
    cin >> hours3 >> minutes3 >> seconds3;
    cout << "Введите время окончания разговора (часы минуты секунды): ";
    cin >> hours4 >> minutes4 >> seconds4;
    double startInSeconds = hours3 * 3600 + minutes3 * 60 + seconds3;
    double endInSeconds = hours4 * 3600 + minutes4 * 60 + seconds4;
    if (endInSeconds < startInSeconds) {
        check += 86400 - startInSeconds;
        double result = (check + endInSeconds)/60 * 30;
        cout << "Result: " << result;
    }
    else {
        double result = (endInSeconds - startInSeconds)/60 * 30;
        cout << "Result: " << result;
    }




    cout << "\n\n5. Пользователь вводит с клавиатуры сумму в гривнах и курс доллара, евро и рубля.Посчитать, сколько пользователь сможет купить долларов, евро и рублей.При этом количество долларов, евро и рублей должно быть целым.Дополнительно вывести на экран сдачу в гривнах.";
    double uah, changeInDollar, changeInEvro, changeInRubl;
    cout << "\nВведите сумму в гривнах и курс доллара, евро и рубля: ";
    cin >> uah >> changeInDollar >> changeInEvro >> changeInRubl;
    int dollarResult = uah / changeInDollar;
    int changeInUah = uah - dollarResult * changeInDollar;
    cout << "Dollar: " << dollarResult << "\nChange in UAH: " << changeInUah;
    int evroResult = uah / changeInEvro;
    int changeInUah2 = uah - evroResult * changeInEvro;
    cout << "\nEvro: " << evroResult << "\nChange in Evro: " << changeInUah2;
    int rublResult = uah / changeInRubl;
    int changeInUah3 = uah - rublResult * changeInRubl;
    cout << "\nRubl: " << rublResult << "\nChange in UAH: " << changeInUah3;



    cout << "\n\n6. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня.Посчитать, сколько целых часов ему осталось сидеть на работе, если рабочий день составляет 8 часов.";

    int seconds5;
    cout << "\nВведите время прошедшее с начала рабочего дня в секундах: ";
    cin >> seconds5;
    if (seconds5 / 3600 >= 8) {
        cout << "0 - hours";
    }
    else {
        cout << 8 - seconds5 / 3600 << " - hours";
    }
   






    cout << "\n\n7. Пользователь вводит с клавиатуры стоимость одного ноутбука, их количество и процент скидки.Посчитать общую сумму заказа.";
    double cost, quantity, discount;
    cout << "\nВведите стоимость одного ноутбука, их количество и процент скидки: ";
    cin >> cost >> quantity >> discount;
    double result2 = quantity * cost - (quantity * cost / 100 * discount);
    cout << "Result: " << result2;







    cout << "\n\n8. Зарплата менеджера составляет 100$ + 5 % от продаж.пользователь вводит с клавиатуры общую сумму сделок менеджера за месяц.посчитать итоговую зарплату менеджера.";
    double quantity2;
    cout << "\nВведите общую сумму сделок менеджера за месяц: ";
    cin >> quantity2;
    double result3 = 100 + quantity2 / 100 * 5;
    cout << "Result: " << result3;




    cout << "\n\n9. Пользователь вводит с клавиатуры размер одного фильма в гигабайтах и скорость Интернет - соединения в битах в секунду.Определить, за какое время(часы, минуты и секунды) скачается фильм.";
    int gbayt, b;
    cout << "\nВведите размер одного фильма в гигабайтах и скорость Интернет - соединения в битах в секунду: ";
    cin >> gbayt >> b;
    int gb = gbayt * 8000000000;
    int seconds2 = gb / b;
    int hours5 = seconds2 / 3600;
    seconds2 %= 3600;
    int minutes5 = seconds2 / 60;
    seconds2 %= 60;
    cout << "Hours: " << seconds2 << "\nMinutes: " << minutes5 << "\nSeconds: " << seconds2;





    cout << "\n\n10. Пользователь вводит с клавиатуры объем флешки в гигабайтах.Посчитать, сколько на нее поместится фильмов размером 760 Мбайт.";
    int gbayt2;
    cout << "\nВведите объем флешки в гигабайтах: ";
    cin >> gbayt2;
    cout << "Result: " << gbayt2 * 1000 / 760;





    cout << "\n\n11. Пользователь вводит с клавиатуры дробное число.Округлить его до двух знаков после запятой и вывести на экран.";
    double number;
    cout << "Введите дробное число: ";
    cin >> number;

    double abbreviated = number * 100;
    int rounding;
    if (abbreviated >= 0)
        rounding = (int)(abbreviated + 0.5);
    else
        rounding = (int)(abbreviated - 0.5);
    number = rounding / 100.0;
    cout << "Округлённое число: " << number << endl;

    



    cout << "\n\n12. Пользователь вводит с клавиатуры количество студентов, сдавших экзамен, и количество «должников».Посчитать, сколько процентов составляют «должники» от общего числа студентов, а также, сколько процентов составляют студенты, сдавшие экзамен.";
    double students, debtors;
    cout << "\nВведите количество студентов, сдавших экзамен, и количество «должников»: ";
    cin >> students >> debtors;
    double allStudents = students + debtors;
    if (allStudents <= 0) {
        cout << "Ошибка: общее количество студентов не может быть ноль или меньше нуля.";
    }
    else {
        double percentOfStudents = students / allStudents * 100;
        double percentOfDebtors = debtors / allStudents * 100;
        cout << "Процент сдавших учеников: " << percentOfStudents << "\nПроцент не сдавших учеников:" << percentOfDebtors;
    }


    cout << "\n\n13. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня.Определить, сколько времени(часов, минут и секунд) осталось до полуночи.";
    int seconds6;
    cout << "\nВведите время прошедшее с начала дня в секундах: ";
    cin >> seconds6;
    if (seconds6  >= 86400) {
        cout << "0";
    }
    else {
        int hours6 = 24 - seconds6 / 3600;
        seconds6 %= 3600;
        int minutes6 =  seconds6 / 60;
        seconds6 %= 60;
        cout << "Часов: " << hours6 << "\nМинут: " << minutes6 << "\nСекунд: " << seconds6;
    }


    cout << "\n\n14. Пользователь вводит с клавиатуры объем одного фильма в гигабайтах.Посчитать, сколько дискет понадобится для переноса фильма на другой компьютер(размер дискеты считать равным 1.44 Мбайт)";
    double gbayt3;
    cout << "\nВведите объем одного фильма в гигабайтах: ";
    cin >> gbayt3;
    cout << "Result: " << gbayt3 * 1000 / 1.44;




    cout << "\n\n15. Пользователь вводит с клавиатуры сумму в гривнах, срок вклада в месяцах и процентную ставку за год.Посчитать, сколько денег будет у пользователя.";
    double uah2, term, year;
    cout << "\nВведите сумму в гривнах, срок вклада в месяцах и процентную ставку за год: ";
    cin >> uah2 >> term >> year;
    double income = uah2 * (year / 100) * term / 12;
    cout << "У пользователя будет " << income + uah2 << " гривен";

    return 0;
}