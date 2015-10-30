/*Se dispone de una cola Q con una cantidad indeterminada de valores correspondientes a temperaturas maximas,
en el rango [0,40], registradas durante cierto periodo del año. Implementar los siguientes operadores.
A) SEPARAR(Q,V) que transfiere a un vector V (Cola Vector [40]) las temperaturas registradas en Q separas segun los 
intervalos [0,1],[1,2].....,[39,40].*/

void Separar(cola *Q, Vector V){
float t;
int k;
while (!Vacia (Q)){
    t=pop(Q);
    k=t;
    Agregar(V[k],t);}
}

/*b)Contar (V,A) que, a partir de V, genera un arreglo A (int Arreglo[40])con la cantidad total de temperaturas
existentes por intervalo. V no debe ser modificado */

void Contar (Vector V, Arreglo A){
  Cola C;
  int i;
  for (i=0;i<40;i++){
    A[i]=0;
    while (!Vacia (V[i])){
      push(C,pop(V[i]));
      A[i]++;}
    while (!Vacia(C)){
      push(V[i],pop(C));
    }
  }
}  
