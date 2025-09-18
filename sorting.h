#ifndef SORTING_H
#define SORTING_H
#include <vector>



void bubbleSort(std::vector<int>& arr);
// Compara pares vecinos y los cambia si no están en la secuencia correcta.
// En cada iteración el elemento más grande burbujea hasta el final de la lista.



void selectionSort(std::vector<int>& arr);
// Busca el elemento menor en la sección desordenada y lo ubica en la posición adecuada.
// La sección inicial queda ordenada tras la finalización de cada iteración.



void insertionSort(std::vector<int>& arr);
// Introduce cada elemento en la sublista ordenada de la parte izquierda,
// moviendo los elementos más grandes hacia la derecha.



void mergeSort(std::vector<int>& arr, int left, int right);
// Algoritmo de dividir y conquistar: fracciona el arreglo en dos mitades,
// Ordena cada mitad recursivamente y posteriormente las combina.



void quickSort(std::vector<int>& arr, int low, int high);
// Elige un pivote y divide el arreglo en dos segmentos:
// Elementos que son menores al pivote y elementos que son mayores o iguales.
// Después, se aplica recursivamente el mismo procedimiento en cada fragmento.

#endif

