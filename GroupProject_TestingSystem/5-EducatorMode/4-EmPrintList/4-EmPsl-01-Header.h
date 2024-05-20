#pragma once

#include "../1-EmCommon/1-EmCo-File-01-Header.h"
#include "../3-EmEditStudentLIst/3-EmEsl-File-01-Header.h"
void print_list(SList list);
int MaxLenName(SList list);
int MaxLenSurname(SList list);
void PrintPodcher(int k,int namel,int surnamel,bool top);
void PrintSelectedTheme(SList list,int num,int mark);
int PrintOneTheme();
void PrintExamMark(SList list,int mark);
void PrintMiddleMark(SList list,int mark);
void PrintTests(SList list,int mark);
int Filter();
int MiddleFilterMenu();
void SortByExMarkU(SList list);
void SortByExMarkV(SList list);
void SortByMidMarkU(SList list);
void SortByMidMarkV(SList list);
void SortByIdU(SList list);
void SortByIdV(SList list);
void SortMenu(SList list);
void SortMenuForEx(SList list);
void SortMenuForMid(SList list);
void SortByTestMarkV(SList list,int num);
void SortByTestMarkU(SList list,int num);
void SortMenuForOneTest(SList list,int num);
void SortBySurnameU(SList list);
void SortBySurnameV(SList list);