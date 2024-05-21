#include "2-EmEq-File-01-Header.h"


void runDelQMenu()
{
    int idToDelete;

    QList* list = createQList();

    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Удаление вопроса <<<             |\n"
        << "|--------------------------------------------------|\n";

    printQList(list);

    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> Список вопросов <<<              |\n"
        << "|--------------------------------------------------|\n";

    do
    {
        std::cout
            << "| Введите id удаляемого вопроса: ";
        std::cin >> idToDelete;
    }
    while (findQNodeById(*list, idToDelete)->question.id != idToDelete);

    deleteQNodeById(*list, idToDelete);
    exportQuestionsToFile(*list);
    clearQList(*list);
    
    std::cout
        << "|--------------------------------------------------|\n"
        << "|          >>> Вопрос успешно удален <<<           |\n"
        << "|--------------------------------------------------|\n"
        << "|--------------------------------------------------|\n"
        << "|  >>> Для продолжения нажмите любую клавишу <<<   |\n"
        << "|--------------------------------------------------|\n";

    char button = _getch();
}