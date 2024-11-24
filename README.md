### **Elección de `std::sort` para el Ordenamiento y del Árbol Binario de Búsqueda (BST)**

#### **1. Elección de `std::sort` para Ordenar**
El algoritmo `std::sort` de la biblioteca estándar de C++ fue seleccionado para ordenar los jugadores por su ELO debido a su eficiencia y optimización. Es un método híbrido que combina características de **Quick Sort**, **Heap Sort**, y **Insertion Sort**, lo que lo hace adaptable a diferentes tamaños y configuraciones de datos. A continuación, se describe detalladamente su funcionamiento, análisis de complejidad y comparación con otros métodos de ordenamiento.

##### **Funcionamiento de `std::sort`**
- Divide la lista de datos en particiones usando Quick Sort.
- Optimiza las particiones pequeñas con Insertion Sort.
- Utiliza Heap Sort como respaldo para evitar los problemas del peor caso de Quick Sort.

##### **Análisis de Complejidad de `std::sort`**
1. **Mejor Caso:**  
   - Se da cuando los datos están casi completamente ordenados. `std::sort` aprovecha esta situación reduciendo las operaciones necesarias en cada partición.  
   - **Complejidad:** \(O(n \log n)\).  

2. **Caso Promedio:**  
   - Se da con datos aleatorios. Las particiones son equilibradas en la mayoría de los casos, y el número de comparaciones se mantiene dentro de \(O(n \log n)\).  
   - **Complejidad:** \(O(n \log n)\).  

3. **Peor Caso:**  
   - Se presenta cuando las particiones son extremadamente desequilibradas, como con una lista completamente ordenada o inversamente ordenada. Sin embargo, `std::sort` mitiga este caso con su implementación híbrida.  
   - **Complejidad:** \(O(n^2)\), pero rara vez ocurre debido a las optimizaciones de la biblioteca estándar.  

##### **Implementación en el Código**
En el proyecto, `std::sort` se utiliza para ordenar los jugadores por su ELO después de la simulación del torneo. El código es el siguiente:

```cpp
void OrdenarELO(vector<Jugador>& jugadores) {
    sort(jugadores.begin(), jugadores.end(), [](const Jugador& a, const Jugador& b) {
        return a.elo > b.elo; // Orden descendente por ELO.
    });
}
```
Aquí:
- `jugadores.begin()` y `jugadores.end()` definen el rango a ordenar.
- La función lambda `[](const Jugador& a, const Jugador& b)` define el criterio de orden (mayor a menor ELO).

##### **Ejemplo con Datos del Proyecto**
Jugadores antes del ordenamiento:
```
Magnus Carlsen - ELO: 2852
Ian Nepomniachtchi - ELO: 2793
Ding Liren - ELO: 2811
```
Salida después de aplicar `std::sort`:
```
Magnus Carlsen - ELO: 2852
Ding Liren - ELO: 2811
Ian Nepomniachtchi - ELO: 2793
```

##### **Comparación con Merge Sort**
Merge Sort es otro algoritmo eficiente con una complejidad de \(O(n \log n)\) en todos los casos. Es estable, lo que significa que mantiene el orden relativo de los elementos con valores iguales. Sin embargo, tiene un mayor consumo de memoria porque requiere espacio adicional para almacenar las sublistas durante la fusión.

**Código Adaptado con Merge Sort:**
```cpp
void Merge(vector<Jugador>& jugadores, int left, int mid, int right) {
    vector<Jugador> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (jugadores[i].elo >= jugadores[j].elo)
            temp[k++] = jugadores[i++];
        else
            temp[k++] = jugadores[j++];
    }
    while (i <= mid) temp[k++] = jugadores[i++];
    while (j <= right) temp[k++] = jugadores[j++];
    for (int p = 0; p < temp.size(); ++p)
        jugadores[left + p] = temp[p];
}

void MergeSort(vector<Jugador>& jugadores, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        MergeSort(jugadores, left, mid);
        MergeSort(jugadores, mid + 1, right);
        Merge(jugadores, left, mid, right);
    }
}
```

**Comparación de Complejidad:**
- **`std::sort`:**  
  - Promedio: \(O(n \log n)\).
  - Mejor: \(O(n \log n)\).
  - Peor: \(O(n^2)\), mitigado por optimizaciones.
  - Ventaja: No requiere memoria adicional.
  
- **Merge Sort:**  
  - Promedio: \(O(n \log n)\).
  - Mejor: \(O(n \log n)\).
  - Peor: \(O(n \log n)\).
  - Desventaja: Requiere \(O(n)\) memoria adicional.

En el contexto del proyecto, `std::sort` es ideal debido a su rendimiento general y menor consumo de memoria.

---

#### **2. Elección del Árbol Binario de Búsqueda (BST)**
El **BST** fue elegido para almacenar y buscar jugadores por su ELO debido a su simplicidad y eficiencia. Es una estructura jerárquica que permite insertar, buscar y recorrer elementos en orden en promedio \(O(\log n)\), siempre que el árbol esté balanceado.

##### **Funcionamiento del BST**
Un BST organiza los datos de manera que:
- Los valores menores que la raíz están en el subárbol izquierdo.
- Los valores mayores están en el subárbol derecho.

##### **Análisis de Complejidad del BST**
1. **Mejor Caso:**  
   - Se da con un árbol balanceado. Las inserciones y búsquedas recorren niveles proporcionales a \(\log n\).  
   - **Complejidad:** \(O(\log n)\).  

2. **Caso Promedio:**  
   - En árboles semibalanceados, las operaciones aún tienden a \(O(\log n)\).  
   - **Complejidad:** \(O(\log n)\).  

3. **Peor Caso:**  
   - Ocurre en un árbol completamente desbalanceado (similar a una lista enlazada).  
   - **Complejidad:** \(O(n)\).  

##### **Implementación en el Código**
El BST se utiliza para almacenar y buscar jugadores por su ELO:

**Inserción:**
```cpp
Nodo* Insertar(Nodo* nodo, const Jugador& jugador) {
    if (nodo == NULL) return new Nodo(jugador);
    if (jugador.elo < nodo->jugador.elo)
        nodo->izquierda = Insertar(nodo->izquierda, jugador);
    else if (jugador.elo > nodo->jugador.elo)
        nodo->derecha = Insertar(nodo->derecha, jugador);
    return nodo;
}
```

**Búsqueda:**
```cpp
Jugador* Buscar(Nodo* nodo, int elo) {
    if (nodo == NULL) return NULL;
    if (elo == nodo->jugador.elo) return &nodo->jugador;
    else if (elo < nodo->jugador.elo) return Buscar(nodo->izquierda, elo);
    else return Buscar(nodo->derecha, elo);
}
```

##### **Ejemplo con Datos del Proyecto**
Jugadores:
```
Magnus Carlsen - ELO: 2852
Ian Nepomniachtchi - ELO: 2793
Ding Liren - ELO: 2811
```

**Estructura del Árbol (por ELO):**
```
        2852
       /    \
    2793    2811
```

##### **Comparación con AVL Tree**
Un AVL Tree es un BST balanceado automáticamente. Mantiene su altura cercana a \(\log n\) mediante rotaciones tras cada inserción o eliminación. Esto mejora el peor caso, pero añade complejidad a las operaciones.

**Comparación de Complejidad:**
- **BST:**  
  - Promedio: \(O(\log n)\).  
  - Peor: \(O(n)\).  

- **AVL Tree:**  
  - Promedio: \(O(\log n)\).  
  - Peor: \(O(\log n)\).  
  - Desventaja: Rotaciones frecuentes aumentan el costo de las inserciones.

En este proyecto, el BST es suficiente porque no se manejan grandes volúmenes de datos y su simplicidad facilita la implementación.

---

### **Conclusión**
- **`std::sort`** fue elegido por su eficiencia promedio, adaptabilidad y menor consumo de memoria en comparación con Merge Sort.
- **BST** es ideal para organizar jugadores en este proyecto debido a su simplicidad y eficiencia en datos moderados, mientras que un AVL Tree añade complejidad innecesaria para este contexto.
