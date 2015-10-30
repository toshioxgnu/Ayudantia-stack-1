void verificarPalindroma( TPila &p, string cad)
{
     TPila aux;     
     
     /* Borrando los espacios de la cadena   */
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);   // borramos el caracter espacio(ASCII 32)
     
     /* Apilamos cada uno de los caracteres, el ultimo sera el primero en la pila*/
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);    


     /* Comparando la cadena con la pila        */
     for(int i=0; i<cad.size(); i++)
     {
          aux = p;   // apunta siempre a la cima de la pila para comparar 
          
          if(cad[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "\n\t La frase ES PALINDROMA..." << endl;
     else
        cout << "\n\t La frase NO ES PALINDROMA..." << endl;
}
