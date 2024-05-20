#include "2-Wwql-File-01-Header.h"


/*
 * Функция addQNodeById добавляет в список новый узел, который будет расположен в списке в соответствии с его id.
 *
 * Функция принимает:
 * 1. Ссылку на список с которым вдется работа - QList& list
 * 2. Ссылку на значение с которым должен быть создан новый узел - Question& question
 * 3. Идентификатор в соответствии с которым будет размещен новый узел в списке - int id
 * 
 * Функция возвращает:
 * 1. 1 - Если по переданному id можно добавить узел.
 * 2. 0 - Если по данному id нельзя добавить узел
 *
 * При каком переданном id функция вернёт 0:
 * 1. Если id <= 0 (0,-1,-2,...)
 * 2. Если id превосходит id последнего узла более чем на 1.
 * 
 * Пример:
 *  Есть список в котором хранится 10 значений (list.tail->question.id == 10)
 *  В таком случае:
 *    addQNodeById(list, question , 11) вернёт 1
 *    addQNodeById(list, question , 12) вернёт 0
 *          
 */
int addQNodeById(QList& list, Question& question, int id)
{
    if (id >= 1)
    {
        if (list.head == nullptr)
        {
            if (id == 1)
            {
                addQNode(list, question);
                return 1;
            }
            else return 0;
        }

        else
        {
            if (id <= list.tail->question.id + 1)
            {
                if (id == list.tail->question.id + 1)
                {
                    addQNode(list, question);
                    return 1;
                }

                else
                {
                    QNode* node = new QNode;
                    QNode* current = list.head;

                    node->question = question;
                    node->question.id = id;

                    if (id == 1)
                    {
                        node->next = current;
                        node->prev = nullptr;
                        current->prev = node;

                        boostQNodeId(current);

                        list.head = node;

                        return 1;
                    }

                    else
                    {
                        while (current->question.id != id) current = current->next;

                        node->next = current;
                        node->prev = current->prev;
                        node->prev->next = node;
                        current->prev = node;

                        boostQNodeId(current);
                        
                        return 1;
                    }
                }
            }

            else return 0;
        }
    }

    else return 0;
}
