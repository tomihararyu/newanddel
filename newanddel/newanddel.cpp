﻿// newanddel.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;


void CalcMulC(int* array ,int size,int average)
{
     int CIN;
    for (int i = 0;i<size;i++)
    {
        cout << "テストの点数を入力してください。"<< i+1<<"人目"<< endl;
        cin >> CIN;
        array[i] = CIN;
    }
}
void ShowArray(const int* array, int size,int average)
{
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << "番目" << array[i] << "点 ";
        average += array[i];
    }
   cout << "平均" <<average/size <<"点"<< endl;
  
}
int main()
{
    int* array;
    int size;
    int average=0;
    cout << "入力したいテストの人数を打ってください" << endl;
    cin >> size;
    array = new int[size];
    CalcMulC(array, size, average);
    ShowArray(array, size, average);

    delete[] array;
    array = NULL;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
