//Implementar, recursivamente en lenguaje C++, el operador Duplicar(S, P) que genera un Stack P como una copia
//exacta de un stack S, ambos objetos de clase Stack.

template <class T>
void Duplicar(Stack<T> &S, Stack<T> &P)
{ T e;
if(!S.vacio())
{ e = S.Pop();
Duplicar(S, P);
S.Push(e);
P.Push(e);
}
}
