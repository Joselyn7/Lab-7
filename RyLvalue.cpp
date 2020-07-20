#include <iostream>
int main()
{
   int i, j, *p;

   // Uso correcto: la variable i es un lvalue.
   i = 7;

   // Uso incorrecto: el operando a la izquierda debe ser un lvalue (C2106).
   7 = i; // C2106
   j * 4 = 7; // C2106

   // Uso correcto: el puntero desreferenciado es un lvalue.
   *p = i; 

   const int ci = 7;
   // Uso incorrecto: la variable es un valor no modificable (C3892).
   ci = 9; // C3892

   // Uso correcto: el operador condicional devuelve un lvalue.
   ((i < 3) ? i : j) = 7;

   //otros
   auto t = std::time(nullptr);
   float sqrPi = std :: sqrt(PI);
   
   return 0;
}

