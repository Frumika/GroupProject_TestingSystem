#include "2-EmEq-File-01-Header.h"


void runDelQMenu()
{
    int idToDelete;

    QList* list = createQList();

    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> �������� ������� <<<             |\n"
        << "|--------------------------------------------------|\n";

    printQList(list);

    std::cout
        << "|--------------------------------------------------|\n"
        << "|             >>> ������ �������� <<<              |\n"
        << "|--------------------------------------------------|\n";

    do
    {
        std::cout
            << "| ������� id ���������� �������: ";
        std::cin >> idToDelete;
    }
    while (findQNodeById(*list, idToDelete)->question.id != idToDelete);

    deleteQNodeById(*list, idToDelete);
    exportQuestionsToFile(*list);
    deleteQList(*list);
    
    std::cout
        << "|--------------------------------------------------|\n"
        << "|          >>> ������ ������� ������ <<<           |\n"
        << "|--------------------------------------------------|\n"
        << "|--------------------------------------------------|\n"
        << "|  >>> ��� ����������� ������� ����� ������� <<<   |\n"
        << "|--------------------------------------------------|\n";

    char button = _getch();
}
